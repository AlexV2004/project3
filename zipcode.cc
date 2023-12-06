/**
 *   @file: zipcode.cc
 * @author: Enter your name
 *   @date: Enter the date
 *  @brief: Add Description
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main() {
    string zipcode;
    string zipOut;

    bool loopZip = true;

    while (loopZip == true) {

        cout << "Enter a zip code: " << endl;
        cin >> zipcode;

        string loop = "";

        zipOut = "";

        for (int i = 0; i < 5; i++) {
        char c = zipcode.at(i);

        if (zipcode.length() == 5) {

        if (c == '1') {
            zipOut += ":::||";
        } else if (c == '2') {
            zipOut += "::|:|";
        } else if (c == '3') {
            zipOut += "::||:";
        } else if (c == '4') {
            zipOut += ":|::|";
        } else if (c == '5') {
            zipOut += ":|:|:";
        } else if (c == '6') {
            zipOut += ":||::";
        } else if (c == '7') {
            zipOut += "|:::|";
        } else if (c == '8') {
            zipOut += "|::|:";
        } else if (c == '9') {
            zipOut += "|:|::";
        } else if (c == '0') {
            zipOut += "||:::";
        }

        } else if (zipcode.length() != 5) {
            cout << "Zipcode needs to be 5 characters" << endl;
            break;
        }
    }

    if (zipOut != "")
    cout << zipOut << endl;

    cout << "More codes? (y/n) ";
    cin >> loop;

    if (loop == "y"){
        loopZip = true;
    } else {
        loopZip = false;
    }

    }

}