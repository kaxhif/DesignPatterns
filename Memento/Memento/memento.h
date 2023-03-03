#pragma once
#include <string>
#include <ctime>

//
//from refactoring_guru
//

class Memento {
public:
	virtual ~Memento() {}
	virtual std::string GetName() const = 0;
	virtual std::string date() const = 0;
	virtual std::string state() const = 0;
};

class ConcreteMemento : public Memento {
private:
    std::string state_;
    std::string date_;

public:
    ConcreteMemento(std::string state) : state_(state) {
        this->state_ = state;
        std::time_t now = std::time(0);
        //this->date_ = std::ctime(&now);
        char str[26];
        ctime_s(str, sizeof str, &now);
        this->date_ = str;
    }
    /**
     * The Originator uses this method when restoring its state.
     */
    std::string state() const override {
        return this->state_;
    }
    /**
     * The rest of the methods are used by the Caretaker to display metadata.
     */
    std::string GetName() const override {
        return this->date_ + " / (" + this->state_.substr(0, 9) + "...)";
    }
    std::string date() const override {
        return this->date_;
    }
};
