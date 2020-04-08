/*
 * StringParserClass.cpp
 *
 *  Created on: Oct 8, 2017
 *      Author: keith
 */

#include <string>
#include <string.h>
#include "../327_proj3_test/includes/StringParserClass.h"
#include "../327_proj3_test/includes/constants.h"

using namespace std;
using namespace KP_StringParserClass;

//call when class initialized, assign start values for private data
StringParserClass::StringParserClass() {

}

//call when class destroyed, clean up allocated memory
StringParserClass::~StringParserClass() {
	cleanup();

}

//assign private start and end tags from user defined start/end tags in parameters

int StringParserClass::setTags(const char *pStart, const char *pEnd) {

	//make sure pointers are not NULL
	if (pStart && pEnd != NULL) {

		//free up memory locations of start/end tag pointers
		delete pStart;
		delete pEnd;

		//figure out length of string
		int startLength = strlen(pStart);
		int endLength = strlen(pEnd);

		//set private members length to above lengths
		pStartTag = new char[startLength];
		pEndTag = new char[endLength];

		//copy user start/end into private members
		for (int i = 0; i < endLength; ++i) {
			*(pStartTag + i) = pStart[i];
		}
	}
	return ERROR_TAGS_NULL;

}

int StringParserClass::getDataBetweenTags(char *pDataToSearchThru,
		std::vector<std::string> &myVector) {

}

void StringParserClass::cleanup() {

}
int StringParserClass::findTag(char *pTagToLookFor, char *&pStart,
		char *&pEnd) {

}
//char	*pStartTag;
//char	*pEndTag;
//bool	areTagsSet;

