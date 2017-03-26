//
//  problem 11.c
//  practice
//
//  Created by 123 on 2017/3/25.
//  Copyright © 2017年 123. All rights reserved.
//

#include "problem 11.h"

void IfSubsequence(struct NODE * headPtrA,struct NODE * headPtrB){
    struct NODE * currentPtrA = headPtrA, *currentPtrB = headPtrB, *ifPtr = NULL;
    while (currentPtrA != NULL && currentPtrB != NULL) {
        if (currentPtrA->data == currentPtrB->data) {
            ifPtr = currentPtrA->nextPtr;
            while (currentPtrB != NULL && currentPtrA != NULL && currentPtrA->data == currentPtrB->data) {
                currentPtrB = currentPtrB->nextPtr;
                currentPtrA = currentPtrA->nextPtr;
            }
            if (currentPtrB == NULL) {
                printf("ListB is the sub sequence of ListA.\n");
            } else {
                currentPtrA = ifPtr;
                currentPtrB = headPtrB;
            }
        } else {
            currentPtrA = currentPtrA->nextPtr;
        }
    }
    if (currentPtrB != NULL) {
        printf("ListB is not the sub sequence of ListA.\n");
    }
    
}


//输入两个指针，A序列的头指针，B序列的头指针。
//定义指针currenptra。遍历A指针，直到data等于B序列的头。
//定义currentptrb。和a一起向下读值，
//如果相等，接着读，直到currptrb读到b序列结尾，还是相等。跳出循环，打印：是子序列。
//如果不相等了，currentB回到b起点，currenta回到之前位置的下一个结点，（ifptr）接着读，直到a的结尾。不相等 打印：不是子序列。
//






