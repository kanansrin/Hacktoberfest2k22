from collections import Counter

myTuple = (0, 2, 3, 4, 1, 0, 1, 0, 2, 6, 3, 8, 0, 3)
print("Tuple : " + str(myTuple))

tupFreq = dict(Counter(myTuple))

print("Frequency of Tuple Elements : " + str(dict(tupFreq)))
