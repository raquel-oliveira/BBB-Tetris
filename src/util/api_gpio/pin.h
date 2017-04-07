#ifndef _API_PIN_
#define _API_PIN_

#include <string>
#include <stdbool.h>

/**
* @author: Raquel Lopes de Oliveira
*/

enum class Value {HIGH, LOW};
enum class Direction {IN, OUT};


class Pin {

	private:
		std::string name_pin;
		Direction d;
		Value v;

		/*
		* Check if can set value to 1
		* @return true if direction is Out
		* @return false if direction is In
		*/
		bool checkDirection();
	
	public:

	Pin(std::string name, Direction direction, Value value);

	~Pin();

	void setDirection(Direction d);

	void setOn();

	void setOff();

	void changeValue();

	void setValue(Value value);

	int getValue();

};

#endif