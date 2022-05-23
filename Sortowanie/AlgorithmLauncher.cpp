#include<iostream>
#include <chrono>
#include <fstream>
#include "../Bubblesort/Bubblesort.cpp"
#include "../HeapSort/HeapSort.cpp"
#include "../MergeSort/MergeSort.cpp"
#include "../ALGprojekt/QuickSort.cpp"

using namespace std;
using namespace chrono;

int main()
{
	int tab[400000];
	int tab_size = 400000;


    ////////////////////////////////////////////////////////     MERGESORT
    ifstream file;
    file.open("lista.txt");

    if (!file.good())
    {
        return 0;
    }
    else
    {
        for (int i = 0; i < 400000; i++)
            file >> tab[i];
    }

    file.close();

    auto start = high_resolution_clock::now();
    merge_sort(tab, tab_size, 0, tab_size - 1);
    auto stop = high_resolution_clock::now();
    auto time = duration_cast<milliseconds>(stop - start);
    cout << "Czas wykonania algorytmu Mergesort dla tablicy nieposortowanej: " << time.count() << "ms" << endl;


    start = high_resolution_clock::now();
    merge_sort(tab, tab_size, 0, tab_size - 1);
    stop = high_resolution_clock::now();
    time = duration_cast<milliseconds>(stop - start);
    cout << "Czas wykonania algorytmu Mergesort dla tablicy posortowanej: " << time.count() << "ms" << endl;

    reverse(begin(tab), end(tab));
    start = high_resolution_clock::now();
    merge_sort(tab, tab_size, 0, tab_size - 1);
    stop = high_resolution_clock::now();
    time = duration_cast<milliseconds>(stop - start);
    cout << "Czas wykonania algorytmu Mergesort dla tablicy posortowanej odwrotnie: " << time.count() << "ms" << endl;
    cout << endl;

    ////////////////////////////////////////////////////////     MERGESORT

    ////////////////////////////////////////////////////////     HEAPSORT
    //file.open("lista.txt");

    //if (!file.good())
    //{
    //    return 0;
    //}
    //else
    //{
    //    for (int i = 0; i < 400000; i++)
    //        file >> tab[i];
    //}

    //file.close();

    // start = high_resolution_clock::now();
    //Heapsort(tab, tab_size);
    // stop = high_resolution_clock::now();
    // time = duration_cast<milliseconds>(stop - start);
    //cout << "Czas wykonania algorytmu Heapsort dla tablicy nieposortowanej: " << time.count() << "ms" << endl;


    //start = high_resolution_clock::now();
    //Heapsort(tab, tab_size);
    //stop = high_resolution_clock::now();
    //time = duration_cast<milliseconds>(stop - start);
    //cout << "Czas wykonania algorytmu Heapsort dla tablicy posortowanej: " << time.count() << "ms" << endl;

    //reverse(begin(tab), end(tab));
    //start = high_resolution_clock::now();
    //Heapsort(tab, tab_size);
    //stop = high_resolution_clock::now();
    //time = duration_cast<milliseconds>(stop - start);
    //cout << "Czas wykonania algorytmu Heapsort dla tablicy posortowanej odwrotnie: " << time.count() << "ms" << endl;
    //cout << endl;

    //////////////////////////////////////////////////////////     HEAPSORT

    //////////////////////////////////////////////////////////     QUICKSORT
    //file.open("lista.txt");

    //if (!file.good())
    //{
    //    return 0;
    //}
    //else
    //{
    //    for (int i = 0; i < 400000; i++)
    //        file >> tab[i];
    //}

    //file.close();

    // start = high_resolution_clock::now();
    //Quicksort(tab, 0, 400000);
    // stop = high_resolution_clock::now();
    // time = duration_cast<milliseconds>(stop - start);
    //cout << "Czas wykonania algorytmu Quicksort dla tablicy nieposortowanej: " << time.count() << "ms" << endl;


    //start = high_resolution_clock::now();
    //Quicksort(tab, 0, 400000);
    //stop = high_resolution_clock::now();
    //time = duration_cast<milliseconds>(stop - start);
    //cout << "Czas wykonania algorytmu Quicksort dla tablicy posortowanej: " << time.count() << "ms" << endl;

    //reverse(begin(tab), end(tab));
    //start = high_resolution_clock::now();
    //Quicksort(tab, 0, 400000);
    //stop = high_resolution_clock::now();
    //time = duration_cast<milliseconds>(stop - start);
    //cout << "Czas wykonania algorytmu Quicksort dla tablicy posortowanej odwrotnie: " << time.count() << "ms" << endl;
    //cout << endl;

    ////////////////////////////////////////////////////////     QUICKSORT

    ////////////////////////////////////////////////////////     BUBBLESORT
    file.open("lista.txt");

    if (!file.good())
    {
        return 0;
    }
    else
    {
        for (int i = 0; i < 400000; i++)
            file >> tab[i];
    }

    file.close();

     start = high_resolution_clock::now();
    Bubblesort(tab, tab_size);
     stop = high_resolution_clock::now();
     time = duration_cast<milliseconds>(stop - start);
    cout << "Czas wykonania algorytmu Bubblesort dla tablicy nieposortowanej: " << time.count() << "ms" << endl;


    start = high_resolution_clock::now();
    Bubblesort(tab, tab_size);
    stop = high_resolution_clock::now();
    time = duration_cast<milliseconds>(stop - start);
    cout << "Czas wykonania algorytmu Bubblesort dla tablicy posortowanej: " << time.count() << "ms" << endl;

    reverse(begin(tab), end(tab));
    start = high_resolution_clock::now();
    Bubblesort(tab, tab_size);
    stop = high_resolution_clock::now();
    time = duration_cast<milliseconds>(stop - start);
    cout << "Czas wykonania algorytmu Bubblesort dla tablicy posortowanej odwrotnie: " << time.count() << "ms" << endl;
    cout << endl;

    ////////////////////////////////////////////////////////     BUBBLESORT

	return 0;
}