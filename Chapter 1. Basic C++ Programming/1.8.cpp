/**************************************************
 *              Essential C++                     *
 *                Stanley Lippman                 *
 *                Chen Chen @ November 26th, 2014 *
 **************************************************/
 
 
const char *MessageToUser(int numTries)
{
	const int num = 5;
	static const char *userMessage[num] = 
	{
		"Go on, make a guess.",
		"Oops! Nice guess but not quite it.",
		"Oh. Sorry. Wrong again.",
		"Ah, this is harder than it looks, no?",
		"It must be getting pretty frustrating by now!"
	};
	if (numTries < 0)
		numTries = 0;
	else if (numTries >= num)
		numTries = num - 1;
	return userMessage[numTries];
<<<<<<< HEAD
}
=======
}
>>>>>>> 182ee3a214fe25b4d1bc6f2d2d1bf52c0fbff338