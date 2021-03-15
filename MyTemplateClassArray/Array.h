#pragma once
#include<ctime>;
#include<iostream>
#include<math.h>
using namespace std;
template <class T> 
class Array
    {
    private:
        int length;
        T* data;
        bool _filled;
    public:
        Array()
        {
            length = 0;
            data = nullptr;
        }

        Array(int length)
        {
            data = new T[length];
            this->length = length;
        }

        ~Array()
        {
            delete[] data;
        }

        T& operator[](int index)
        {
            return data[index];
        }

        void Fill()
        {
            srand(time(nullptr));
            for (auto i = 0; i < length; i++)
            {
                data[i] = rand()%10;
            }
            _filled = true;
            
        }

        void Power3()
        {
            if (!_filled) throw exception("Ёто пустой массив! “упой???"); 
            for (auto i = 0; i < length; i++)data[i] = pow(data[i], 3); 
        }

        void Show()
        {
            if (length != 0)
                for (auto i = 0; i < length; i++)
                    cout << data[i] <<"\t";
            cout << "\n";
        }

        void Erase()
        {
            delete[] data;
            // ѕрисваиваем значение nullptr дл€ data, чтобы на выходе не получить вис€чий указатель!
            data = nullptr;
            length = 0;
            _filled = false;
        }

        void push_back(T value)
        {
            if (_filled)throw exception("Ќу не судьба добавить еще :)");

            T* NewArray = new T[length + 1];
            for (int i = 0; i < length; i++)
            {
                NewArray[i] = data[i];
            }
            NewArray[length++] = value;
            delete[]data;
            data = NewArray;
        }

        void deleteMin()
        {
            
            int k,min=10000;
            for (auto i = 0; i < length; i++)
                if ( data[i]<min ) { min = data[i]; k = i; }
            if (k == 0)delete_the_first();
            else if(k == length - 1)pop_back();
                else delete_middle(k);
 

        }
        
        //delete the element in the middle
        void delete_middle(const int position)
        {
            int* NewArray = new int[--length];
            for (int i = 0; i < position; i++)
            {
                NewArray[i] = data[i];
            }

            for (int i = position; i < length; i++)
            {
                NewArray[i] = data[i + 1];
            }

            delete[]data;
            data = NewArray;
        }

        //delete the first element
        void delete_the_first()
        {
            if (!_filled)throw exception("ну Ќ≈Ћ№«я удалить элемент в пустом массиве!!!");
            int* NewArray = new int[--length];
            for (int i = 0; i < length; i++)
            {
                NewArray[i] = data[i + 1];
            }
            delete[]data;
            data = NewArray;
        }

        //delete the last element
        void pop_back()
        {
            int* NewArray = new int[--length];
            for (int i = 0; i < length; i++)
            {
                NewArray[i] = data[i];
            }
            delete[]data;
            data = NewArray;
        }

        int getLength(); 
    };

template<class T>
inline int Array<T>::getLength()
    {
        return length;
    }
