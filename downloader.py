#!/usr/bin/python
#-*- coding: utf-8 -*-

from bs4 import BeautifulSoup
import requests
import sys

def save_testcase(data, ftype, index):
	fname = ftype + '_' + index + '.txt'
	f = open(fname, 'w')
	f.write(data.strip() + '\n')
	f.close()

def main():
	contest_name = sys.argv[1]
	level = ord(sys.argv[2]) - 64

	url = 'http://beta.atcoder.jp/contests/'
	url += contest_name
	url += '/tasks/'
	url += contest_name + '_' + str(level)

	print('URL: ' + url)

	res = requests.get(url)
	html = res.text

	soup = BeautifulSoup(html, 'html.parser')

	divs = soup.find_all('div', {'class': 'part'})

	for div in divs:
		h3 = div.find_all('h3')
		pre = div.find_all('pre')

		if (len(h3) == 1) and (len(pre) == 1):
			h3 = h3[0].text
			pre = pre[0].text

			if h3.find('入力例') != -1:
				save_testcase(data=pre.strip(), ftype='in', index=h3[-1])
			elif h3.find('出力例') != -1:
				save_testcase(data=pre.strip(), ftype='out', index=h3[-1])

if __name__=='__main__':
	main()
