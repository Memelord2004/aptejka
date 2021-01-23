#include "Header.h"

int main()
{
    string id;
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
        if (nos.is_open()) {
            for (int i = 0; !nos.eof(); i++) { //пересчёт и заполнение в программу  
                while (nos >> lekar->id >> lekar->name >> lekar->cost >> lekar->quanity) {
                    cout << "№" << lekar[i].id << endl << "название:" << lekar[i].name << endl << "цена:" << lekar[i].cost << endl << "количество:" << lekar[i].quanity << endl << "\n";
                }
            }
            cout << "Желаете редактировать колчество товара на складе? 0 нет, 1 да" << endl;
            int reduct; //бул для выбора
            cin >> reduct;
            if (reduct == 1) {
                cout << "У какого номера товара вы хотите отредактировать количество: ";      
                    cin >> lekar->id;
                    cout << "Новое значение: ";
                    cin >> lekar->quanity;
                    if (lekar->id == "1") {
                        nos >> lekar->id >> lekar->name >> lekar->cost >> lekar->quanity;
                        cout << "№" << lekar->id << endl << "название:" << lekar->name << endl << "цена:" << lekar->cost << endl << "количество:" << lekar->quanity << endl << "\n";
       
                    }
                    if (lekar->id == "2") {
                        cout << "№" << lekar->id << endl << "название:" << lekar->name << endl << "цена:" << lekar->cost << endl << "количество:" << lekar->quanity << endl << "\n";
                    }       
                cout << "Редактриование успешно завершено!" << endl;
                if (reduct == 0) {
                    cout << "Редактирование отменено";
                }
            }
        }
        nos.close();
        break;
    case 2: {
        gorlo.open("gorlo.txt");
        if (gorlo.is_open()) {
            for (int i = 0; !gorlo.eof(); i++) {
                while (gorlo >> lekar->id >> lekar->name >> lekar->cost >> lekar->quanity) {
                  cout << "№" << lekar[i].id << endl << "название:" << lekar[i].name << endl << "цена:" << lekar[i].cost << endl << "количество:" << lekar[i].quanity << endl << "\n";
                }
            }
            cout << "Желаете редактировать колчество товара на складе? 0 нет, 1 да" << endl;
            int reduct; //бул для выбора
            cin >> reduct;
            if (reduct == 1) {
                cout << "У какого номера товара вы хотите отредактировать количество: ";
                cin >> lekar->id;
                cout << "Новое значение: ";
                cin >> lekar->quanity;
                if (lekar->id == "1") {
                    nos >> lekar->id >> lekar->name >> lekar->cost >> lekar->quanity;
                    cout << "№" << lekar->id << endl << "название:" << lekar->name << endl << "цена:" << lekar->cost << endl << "количество:" << lekar->quanity << endl << "\n";

                }
                if (lekar->id == "2") {
                    cout << "№" << lekar->id << endl << "название:" << lekar->name << endl << "цена:" << lekar->cost << endl << "количество:" << lekar->quanity << endl << "\n";
                }
                cout << "Редактриование успешно завершено!" << endl;
                if (reduct == 0) {
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
                while (antivirus >> lekar->id >> lekar->name >> lekar->cost >> lekar->quanity) {
                    cout << "№" << lekar[i].id << endl << "название:" << lekar[i].name << endl << "цена:" << lekar[i].cost << endl << "количество:" << lekar[i].quanity << endl << "\n";
                }
            }
            cout << "Желаете редактировать колчество товара на складе? 0 нет, 1 да" << endl;
            int reduct; //бул для выбора
            cin >> reduct;
            if (reduct == 1) {
                cout << "У какого номера товара вы хотите отредактировать количество: ";
                cin >> lekar->id;
                cout << "Новое значение: ";
                cin >> lekar->quanity;
                if (lekar->id == "1") {
                    nos >> lekar->id >> lekar->name >> lekar->cost >> lekar->quanity;
                    cout << "№" << lekar->id << endl << "название:" << lekar->name << endl << "цена:" << lekar->cost << endl << "количество:" << lekar->quanity << endl << "\n";

                }
                if (lekar->id == "2") {
                    cout << "№" << lekar->id << endl << "название:" << lekar->name << endl << "цена:" << lekar->cost << endl << "количество:" << lekar->quanity << endl << "\n";
                }
                cout << "Редактриование успешно завершено!" << endl;
                if (reduct == 0) {
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

