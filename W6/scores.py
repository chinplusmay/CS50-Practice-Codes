scores = []
n = int(input("no of scores: "))
for i in range(n):
    score = int(input("type scores: "))
    scores +=[score]                            #same as-----> scores.append(score)

avg = sum(scores) / len(scores)
print("avg: ",avg)    