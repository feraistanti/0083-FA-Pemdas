

#include <iostream>
using namespace std;

class Matakuliah {
private:
    float presensi;
    float activity;
    float exercise;
    float tugasAkhir;

protected:
    float temp;
public:
    Matakuliah() {
        cout << "Matakuliah dibuat" << endl;
        cout << "-------------------" << endl;
    }
    void setPresensi(float a) {
        this->presensi = 100;
    }
    void setActivity(float b) {
        this->activity = 90;
    }
    void setExercise(float c) {
        this->exercise = 87;
    }
    void setTugasAkhir(float d) {
        this->tugasAkhir = 70;
    }

    float getPresensi()
    {
        return presensi;
    }

    float getActivity()
    {
        return activity;
    }

    virtual void input() = 0;
    virtual float matakuliah() = 0;  //polymorvy 
    virtual void display() = 0;
};

class pemrograman : public Matakuliah {
public:
    pemrograman() {
        cout << "pemrograman dibuat" << endl;
        cout << "------------------" << endl;
    }
    void input() {
        cout << "masukan nilaiPresensi = 100 ";
        cin >> temp;
        setPresensi(temp);

        cout << "masukan nilaiActivity = 90 ";
        cin >> temp;
        setActivity(temp);

        cout << "masukan niaiExercise = 87 ";
        cin >> temp;
        setExercise(temp);

        cout << "masukan nilai tugas akhir = 70 ";
        cin >> temp;
        setTugasAkhir(temp);
    }

    int perhitungan() {
        return getPemrograman() getJaringan();
    }

};
class jaringan : public Matakuliah {
public:
    jaringan() {
        cout << "jaringan dibuat" << endl;
        cout << "----------------" << endl;
    }
    void input() {
        cout << "masukan nilai activity = 45 ";
        cin >> temp;
        setActivity(temp);

        cout << "masukan nilai exercise = 90 ";
        cin >> temp;
        setExercise(temp);

        cout << "masukan nilai Akhir = 63 ";
        cin >> temp;
        set NilaiAkhir(temp);
    }

    float perhitungan() {
        return getPemrograman() getJaringan();
    }
};