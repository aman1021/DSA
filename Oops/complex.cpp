class complexnumbers{
    private:
    int realnumber;
    int imaginarynum;

    public:

    complexnumbers(int realnumber, int imaginarynum){
        this -> realnumber = realnumber;
        this -> imaginarynum = imaginarynum;
    }

    void print() {
        cout<< realnumber << "+" << imaginarynum << "i" << endl;  // the error will only go during compilation, 
                                                                   //if doesnot goes dont worry program will run.
    }

    void plus(complexnumbers const &c2){
        realnumber = realnumber + c2.realnumber;
        imaginarynum = imaginarynum + c2.imaginarynum;
    }

    void multiply(complexnumbers const &c2){
        realnumber = realnumber * c2.realnumber;
        imaginarynum = imaginarynum * c2.imaginarynum;
    }
};