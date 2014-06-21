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

// cocos2dx
class TestLayer : public cocos2d::Layer
{
public:
    //初期化のメソッド
    virtual bool init();
    
    static cocos2d::CCScene*scene();
    
    //create()を使えるようにしている。
    //CREATE_FUNC(NewLayer);

};


#endif /* defined(__TestProj__Test__) */
