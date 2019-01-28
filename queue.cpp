/**
 * Queue data structure
 *
 * Similar to STL queue
 * push - add item
 * front - get item at the front of queue
 * pop - remove item
 **/

#include <cassert>
#include <stdexcept>
#include <iostream>
#include "queue.h"

using namespace std;

// default constructor
Queue::Queue() {
  //TODO(me)
}

// empty destructor, let compiler define it
Queue::~Queue() = default;

// return true if queue is empty
bool Queue::empty() const {
  //TODO(me)
  return true;
}

// return true if queue is full
bool Queue::full() const {
  //TODO(me)
  return true;
}

// add item to back of queue
// [2 7]
// after push(10)
// [2 7 10]
void Queue::push(const int &value) {
  if (full())
    throw std::out_of_range("push called on full queue");
  //TODO(me)
}

// remove item from front of queue
// [2 7 10]
// after pop()
void Queue::pop() {
  if (empty())
    throw std::out_of_range("pop called on empty queue");
  //TODO(me)
}

const int &Queue::front() const {
  if (empty())
    throw std::out_of_range("front called on empty queue");
  //TODO(me)
  return 0;
}
