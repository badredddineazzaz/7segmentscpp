#include <iostream>
#include <vector>
#include <bitset>

using namespace std;



vector<bool> segmentsLogic(bool x0, bool x1, bool x2, bool x3) {
    bool a = (x1&&x2) || (x1&&!x3) || (!x0 && x3) || (!x0 && !x2) || (x0 && !x3 && x2) || (!x1 && x3 && !x2);

    bool b = (!x0 && !x2) || (!x1 && !x2) || (x1 && x0 && !x3) || (!x1 && x0 && x3) || (!x1 && !x0 && !x3) ;

    bool c = (x0 && !x3) || (!x1 && x0) || (x3 && !x2) || (!x3 && x2) || (!x1 && !x2) ;

    bool d = (!x1 && x3) || (x1 && !x0 && x2) || (x1 && x0 && !x2) || (!x1 && x0 && x2) || (!x0 && !x3 && !x2);

    bool e = (x1 && !x0) || (x1 && x3) || (x3 && !x2) || (!x0 && x3) || (!x0 && !x2)  ;

    bool f = (x1 && x3) || (x3 && !x2) || (!x0 && x2) || (!x1 && !x0) || (!x1 && !x3 && x2);

    bool g = (x1 && x3) || (x1 && !x2) || (x3 && !x2) || (!x1 && x0 && x2) || (!x0 && !x3 && x2) ;

    return {a, b, c, d, e, f, g};
}


bitset<4> hexDigitToBinary(char hexDigit) {
    int decimalValue;
    if (hexDigit >= '0' && hexDigit <= '9') {
        decimalValue = hexDigit - '0';
    } else {
        decimalValue = tolower(hexDigit) - 'a' + 10;
    }

    return bitset<4>(decimalValue);
}

void showResult(vector<bool> result){

        // Print the results using cout
    cout << "Segments: ";
    for (bool segment : result) {
        cout << segment << " ";
    }
    cout << endl;
         // Declare a matrix of empty strings with 7 rows and 4 columns

    vector<vector<string>> matrix(7, vector<string>(4));

    //a
    if(result[0]){
        matrix[0][1] = " -";
        matrix[0][2] = "------";
    }
    //b
    if(result[1]){
        matrix[1][3] = "\t|";
        matrix[2][3] = "\t|";
    }
    //c
    if(result[2]){
        matrix[4][3] = "\t|";
        matrix[5][3] = "\t|";
    }
    //d
    if(result[3]){
        matrix[6][1] = " -";
        matrix[6][2] = "------";
    }
    //e
    if(result[4]){
        matrix[4][0] = "|";
        matrix[5][0] = "|";
    }
    //f
    if(result[5]){
        matrix[1][0] = "|";
        matrix[2][0] = "|";
    }
    //g
    if(result[6]){
        matrix[3][1] = " -";
        matrix[3][2] = "------";
    }


    // Print the matrix
    for (size_t i = 0; i < matrix.size(); ++i) {
        for (size_t j = 0; j < matrix[i].size(); ++j) {
            cout << matrix[i][j] ;
        }
        cout << endl;
    }

}



int main() {
   while (true)
   {
     char hexDigit;
    cout << "Enter a hex digit (0-9, A-F): ";
    cin >> hexDigit;

    if ((hexDigit < '0' || hexDigit > '9') && (hexDigit < 'a' || hexDigit > 'f') && (hexDigit < 'A' || hexDigit > 'F')) {
        cout << "Invalid input. Exiting the program." << endl;
        break;
    }
    bitset<4> binaryString = hexDigitToBinary(hexDigit);

    bool x0=binaryString[0];
    bool x1=binaryString[1];
    bool x2=binaryString[2];
    bool x3=binaryString[3];

    // Print the results
    cout << "Hexadecimal: " << hexDigit << endl;
    cout << "Binary:      " << binaryString << endl;

    showResult(segmentsLogic(x0, x1, x2, x3));  


   }
   
    return 0;
}
