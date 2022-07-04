"""
문제: 위장
해결: 딕셔너리
if, top 3, bottom 2
then, (top 3 + none bottom 1) x (bottom 2 + none top 1) = 6
6 - (neither top and bottom 1) = 5
"""
def solution(clothes):
    answer = 1
    dictionary = {}

    for i in range(len(clothes)):
        if clothes[i][1] not in dictionary:
            dictionary[clothes[i][1]] = 1
        else:
            dictionary[clothes[i][1]] += 1
    print(dictionary)

    keys = list(dictionary.keys())
    for i in range(len(keys)):
        answer *= (dictionary[keys[i]] + 1) 
    answer -= 1

    return answer

# clothes = [["crow_mask", "face"], ["blue_sunglasses", "face"], ["smoky_makeup", "face"]]
clothes = [["yellow_hat", "headgear"], ["blue_sunglasses", "eyewear"], ["green_turban", "headgear"]]
solution(clothes)