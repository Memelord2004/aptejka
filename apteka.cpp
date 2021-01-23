#include "Header.h"

int main()
{

    string temp;
    int countStr = 10000; //инт для пересчёта в файле
    Lekarstva* lekar = new Lekarstva[countStr]; //с помощью lekar обращайся к стрингу Lekarstva
    setlocale(LC_ALL, "Russian");
    cout << "Выберите категорию" << endl;
    cout << "1. Средства для носа" << endl;
    cout << "2. Средства для горла" << endl;
    cout << "3. Средства для борьбы с вирусами" << endl;
    int choose; //инт для выбора
    cin >> choose; //ввод выбора
    fstream nos;
    fstream gorlo;
    fstream antivirus;
    ofstream nos_f;
    //текстовые файлы я засунул по пути source/repos/apteka/apteka

    switch (choose)
    {
    case 1: {
        nos.open("nos.txt", ios::in);
        nos_f.open("nos_f.txt", ios::app);
        if (nos.is_open()) {
            for (int i = 0; !nos.eof(); i++) { //пересчёт и заполнение в программу  
                while (nos >> lekar->id >> lekar->name >> lekar->cost >> lekar->quanity) {
                    cout << "№" << lekar[i].id << endl << "название:" << lekar[i].name << endl << "цена:" << lekar[i].cost << endl << "количество:" << lekar[i].quanity << endl << "\n";
                }
            }
            cout << "Желаете редактировать колчество товара на складе? 0 нет, 1 да" << endl;
            bool reduct; //бул для выбора
            cin >> reduct;
            if (reduct) {
                cout << "У какого номера товара вы хотите отредактировать количество: ";
                temp = lekar->id + lekar->name + lekar->cost + lekar->quanity;
                nos_f << lekar->id << " " << lekar->name << " " << lekar->cost << " " << lekar->quanity;
                for (int i = 0; i < 1; i++) {
                    cin >> lekar[i].id;
                    cout << "Новое значение: ";
                    cin >> lekar[i].quanity;
                    cout << "№" << lekar[i].id << endl << "название:" << lekar[i].name << endl << "цена:" << lekar[i].cost << endl << "количество:" << lekar[i].quanity << endl << "\n";
                }
                cout << "Редактриование успешно завершено!" << endl;
                if (!reduct) {
                    cout << "Редактирование отменено";
                }
            }
        }
        nos.close();
    case 2: {
        gorlo.open("gorlo.txt");
        if (gorlo.is_open()) {
            for (int i = 0; !gorlo.eof(); i++) {
                while (gorlo >> lekar->id >> lekar->name >> lekar->cost >> lekar->quanity) {
                    cout << "№" << lekar[i].id << endl << "название:" << lekar[i].name << endl << "цена:" << lekar[i].cost << endl << "количество:" << lekar[i].quanity << endl << "\n";
                }

            }
            cout << "Желаете редактировать колчество товара на складе? 0 нет, 1 да" << endl;
            bool reduct; //бул для выбора
            cin >> reduct;
            if (reduct) {
                cout << "У какого номера товара вы хотите отредактировать количество: ";
                temp = lekar->id + lekar->name + lekar->cost + lekar->quanity;
                nos_f << lekar->id << " " << lekar->name << " " << lekar->cost << " " << lekar->quanity;
                for (int i = 0; i < 1; i++) {
                    cin >> lekar[i].id;
                    cout << "Новое значение: ";
                    cin >> lekar[i].quanity;
                    cout << "№" << lekar[i].id << endl << "название:" << lekar[i].name << endl << "цена:" << lekar[i].cost << endl << "количество:" << lekar[i].quanity << endl << "\n";
                }
                cout << "Редактриование успешно завершено!" << endl;
                if (!reduct) {
                    cout << "Редактирование отменено";
                }
            }
        }
        gorlo.close();
        break;
    }

    case 3: {
        antivirus.open("anti-virus.txt", ios::in);
        if (antivirus.is_open()) {
            
            for (int i = 0; !antivirus.eof(); i++) {
                while (gorlo >> lekar->id >> lekar->name >> lekar->cost >> lekar->quanity) {
                    cout << "№" << lekar[i].id << endl << "название:" << lekar[i].name << endl << "цена:" << lekar[i].cost << endl << "количество:" << lekar[i].quanity << endl << "\n";
                }

            }
            cout << "Желаете редактировать колчество товара на складе? 0 нет, 1 да" << endl;
            bool reduct; //бул для выбора
            cin >> reduct;
            if (reduct) {
                cout << "У какого номера товара вы хотите отредактировать количество: ";
                temp = lekar->id + lekar->name + lekar->cost + lekar->quanity;
                nos_f << lekar->id << " " << lekar->name << " " << lekar->cost << " " << lekar->quanity;
                for (int i = 0; i < 1; i++) {
                    cin >> lekar[i].id;
                    cout << "Новое значение: ";
                    cin >> lekar[i].quanity;
                    cout << "№" << lekar[i].id << endl << "название:" << lekar[i].name << endl << "цена:" << lekar[i].cost << endl << "количество:" << lekar[i].quanity << endl << "\n";
                }
                cout << "Редактриование успешно завершено!" << endl;
                if (!reduct) {
                    cout << "Редактирование отменено";
                }
            }
        }
        antivirus.close();
        break;
    }
    default:
        break;
    }


    }
}

