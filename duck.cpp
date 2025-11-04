#include "duck.h"

/* TODO */
void Duck::performFly(){
    Duck::flyBehavior->fly();
}
/* TODO */
void Duck::performQuack(){
    Duck::quackBehavior->quack();
}
/* TODO */
void Duck::setFlyBehavior(FlyBehavior* fb){
    if (Duck::flyBehavior != nullptr) 
        delete Duck::flyBehavior;
    Duck::flyBehavior = fb;
}
/* TODO */
void Duck::setQuackBehavior(QuackBehavior* qb){
    if (Duck::quackBehavior != nullptr) 
        delete Duck::quackBehavior;
    Duck::quackBehavior = qb;
}


/* TODO */
MallardDuck::MallardDuck() {
    // 생성자에서 setting을 끝낸다.
    MallardDuck::setFlyBehavior(new FlyWithWings);
    MallardDuck::setQuackBehavior(new Quack);
}
/* TODO */
RedheadDuck::RedheadDuck() {
    RedheadDuck::setFlyBehavior(new FlyWithWings);
    RedheadDuck::setQuackBehavior(new Quack);
}
/* TODO */
RubberDuck::RubberDuck() {
    RubberDuck::setFlyBehavior(new FlyNoWay);
    RubberDuck::setQuackBehavior(new Squeak);
}
/* TODO */
DecoyDuck::DecoyDuck() {
    DecoyDuck::setFlyBehavior(new FlyNoWay);
    DecoyDuck::setQuackBehavior(new MuteQuack);
}
/* TODO */
ModelDuck::ModelDuck() {
    ModelDuck::setFlyBehavior(new FlyNoWay);
    ModelDuck::setQuackBehavior(new MuteQuack);
    
    // ModelDuck::flyBehavior->fly();
    // ModelDuck::quackBehavior->quack();
    // ModelDuck::display();
}