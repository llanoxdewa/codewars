import itertools


def nimGame(pile):
	player = 0
	n = len(pile)

	if n % 2:
		return "First"
	one = pile.count(1)
	nn = n - one


	if nn == 0:
		return "Second"

	if one % 2 == 0 and nn % 2:
		return "First"

	if one % 2 and nn % 2:
		return "Second"
	


	return "First"
  


g = int(input())

for _ in range(g):
	n = int(input())
	pile = list(map(int,input().split(' ')))
	print(nimGame(pile))




