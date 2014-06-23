//
//  Test.h
//  TestProj
//
//  Created by 鷲見昌俊 on 2014/06/20.
//
//

#ifndef __TestProj__Test__
#define __TestProj__Test__

#include "cocos2d.h"

using namespace cocos2d;

// cocos2dx
class TestLayer : public Layer
{
public:
    //初期化のメソッド
    virtual bool init();
        
    //create()を使えるようにしている。
    CREATE_FUNC(TestLayer);

};


#endif /* defined(__TestProj__Test__) */
