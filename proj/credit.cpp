#include"configure.h"
#include"iostream"

inline void credit(const char* my_decisions,
	const char* opp_decisions,
	int len,
	double* my_credit,
	double* opp_credit,
	double* my_reward,
	double* opp_reward,
	double* my_punishment,
	double* opp_punishment,
	enum protocol_code protocol_code)
{
	if (my_decisions[0] == 'm') {
		if (opp_decisions[0] == 'm') {
			return;
		}
		else {
			/*
				´ý²¹³ä
			*/
			return;
		}
	}
	else {
		if (opp_decisions[0] == 'm') {
			/*
				´ý²¹³ä
			*/
			return;
		}
		else {
			for (size_t i = 0;i < len; ++i) {

			}
		}
	}
}