#include "bet.h"

Bet::Bet(double amount, Outcome outcome)
	: amount(amount), outcome(outcome) {

}

double Bet::winAmount() const {
	return outcome.winAmount(amount);
}

double Bet::loseAmount() const {
	return -1 * amount;
}

std::string Bet::toString() const {
	std::string str = "";
	str = std::to_string(amount) + " on " 
		+ outcome.getName() + " at " + outcome.oddsToString();
	return str;
}