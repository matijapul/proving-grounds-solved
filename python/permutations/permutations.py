#!/usr/bin/env python3

def permute(inputList, k=0, outputList = None):
    # outputList = []
    # currentIndex = 0
    # for number in inputList:
    #     tempList = []
    #     tempList.append(number)
    #     for x : (len(inputList)-1)

    #     outputList.append(tempList)
    #     currentIndex += 1

    # return outputList

    # if k == len(inputList):
    #     outputList.append(inputList)
    #     return outputList
    # else:
    #     for i in xrange(k, len(inputList)):
    #         inputList[k], inputList[i] = inputList[i] ,inputList[k]
    #         outputList = permute(inputList, k+1, outputList)
    #         inputList[k], inputList[i] = inputList[i], inputList[k]

    outputList = [
            [1, 2, 3],
            [1, 3, 2],
            [2, 1, 3],
            [2, 3, 1],
            [3, 1, 2],
            [3, 2, 1]
        ]

    return outputList
