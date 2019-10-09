#!/bin/python3

from typing import Dict, List

#
# Complete the 'nonDivisibleSubset' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER k
#  2. INTEGER_ARRAY s
#

def nonDivisibleSubset(k: int, s: List[int]) -> int:
  occurences = countOccurences([ item % k for item in s ])
  count = 0
  for key in occurences:
    if key == 0:
      print('zero' + str(key))
      count += 1
    elif key*2 == k:
      print('key*2 ' + str(key))
      count += 1
    elif k - key in occurences and occurences[key] > occurences[k - key]:
      print('key > ' + str(key))
      count += occurences[key]
    elif k - key not in occurences:
      print('other ' + str(key))
      count += occurences[key]
  return count

def countOccurences(s: List[int]) -> Dict[int, int]:
  occurences = {}
  for item in s:
    if item in occurences:
      occurences[item] += 1
    else:
      occurences[item] = 1
  return occurences

if __name__ == '__main__':
    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])
    k = int(first_multiple_input[1])
    s = list(map(int, input().rstrip().split()))

    result = nonDivisibleSubset(k, s)
    # result = countOccurences(s)

    print(result)
