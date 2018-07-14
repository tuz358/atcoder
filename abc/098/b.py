#!/usr/bin/python

N = int(raw_input())
S = str(raw_input())

counter = 0
ans = 0

for i in range(N):
	X = list(S[:i])
	Y = (S[i:])

	sorted(X)
	sorted(Y)

	X = list(set(X))
	Y = list(set(Y))

	for j in range(len(X)):
		if(str(Y).find(X[j]) != -1):
			counter += 1
	if(counter > ans):
		ans = counter
	counter = 0

print ans
