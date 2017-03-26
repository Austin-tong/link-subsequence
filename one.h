//
//  one.h
//  practice
//
//  Created by 123 on 2017/3/23.
//  Copyright © 2017年 123. All rights reserved.
//

#ifndef one_h
#define one_h

#include <stdio.h>
#include <stdlib.h>


//定义结构体
struct NODE{
    int data;
    struct NODE * nextPtr;
};


struct NODE * createFIFOList();
struct NODE * createFILOlist();
void createFILOlist2(struct NODE * * sPtr);
void creatFIFOlist2(struct NODE * * sPtr);
void printList(struct NODE * currentPtr);
void destroyList(struct NODE * headPtr);

#endif /* one_h */
