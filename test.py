#!/usr/bin/python
#-*- coding: utf-8 -*-

import subprocess
import glob
import sys
import os
import pyperclip

ext2exec = {'.c': 'gcc', '.cpp': 'g++-4.9'}

class bcolors:
	HEADER = '\033[95m'
	OKBLUE = '\033[94m'
	OKGREEN = '\033[92m'
	WARNING = '\033[93m'
	FAIL = '\033[91m'
	ENDC = '\033[0m'
	BOLD = '\033[1m'
	UNDERLINE = '\033[4m'

def copy2clipboard(text):
	pyperclip.copy(text)

def main():
	target_file = sys.argv[1]
	inputs = glob.glob('./in_*.txt')
	outputs = glob.glob('./out_*.txt')
	inputs.sort()
	outputs.sort()

	print('[*] '+str(len(inputs)) + ' test cases found.')

	cmd = ['g++-4.9', target_file]
	p = subprocess.call(cmd)
	cmd = ' '.join(cmd)
	if p == 0:
		print(cmd + '\r\t\t... ' + bcolors.OKGREEN + 'OK' + bcolors.ENDC)
	else:
		print(cmd + '\r\t\t... ' + bcolors.WARNING + 'CE' + bcolors.ENDC)

	print('-'*23)

	AC = True
	WA = ''
	WA_cnt = 0
	for x in range(len(inputs)):
		p = subprocess.Popen('./a.out', stdin=open(inputs[x], 'r'), stdout=subprocess.PIPE, stderr=subprocess.PIPE)
		output = p.stdout.read()
		answer = open(outputs[x]).read()
		
		print(inputs[x] + '\r\t\t...'),
		if p.stderr.read() is '':
			AC = False
			print(bcolors.WARNING + 'RE' + bcolors.ENDC)
		elif output == answer:
			print(bcolors.OKGREEN + 'AC' + bcolors.ENDC)
		else:
			AC = False
			WA += 'Output:\n' + output + '\n'
			WA += 'Answer:\n' + answer + '\n'
			WA_cnt += 1
			print(bcolors.WARNING + 'WA' + bcolors.ENDC)

	print('-'*23)
	if AC:
		print('[+] test passed.')
		copy2clipboard(open(target_file).read())
	else:
		print(WA)
		print('[-] test failed : ' + str(WA_cnt) + 'AC / ' + str(len(inputs)) + ' cases')

if __name__=='__main__':
	main()
