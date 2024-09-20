// trebuie de facut inmultirea a 2 matrice
class Matrix
{
private:
    float** c_elem{};
    int c_i;
    int c_j;
    int c_error{};
    // c_error code
    // 1 memorie insuficienta
    // 2 necorespondenta dimensiunilor matricelor
    // 3 depasirea limitei memoriei

public:
    Matrix();
    Matrix(int);
    Matrix(int,int);
    Matrix(const Matrix&);
    ~Matrix();
    void printMatrix;
    void dealocare();
    void alocare(int,int);
    void returnM();
    void setM(int,int);
    void addM(const Matrix&);
    void subtractM(const Matrix&);
    Matrix multiplyM(const Matrix&);
    void multiplyNumber(int);
};


