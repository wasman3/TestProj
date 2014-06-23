//
//  Test.cpp
//  TestProj
//
//  Created by 鷲見昌俊 on 2014/06/20.
//
//

#include "Test.h"

USING_NS_CC;



bool TestLayer::init(){
    
    
    if (!Layer::init()) {
        
        return false;
    }
    
    //auto sprite = Sprite::create("Image.png");
    //sprite->setPosition(Vec2(200,300));
    
    //addChild(sprite);
    log("init called");
    
    
    return true;
}


