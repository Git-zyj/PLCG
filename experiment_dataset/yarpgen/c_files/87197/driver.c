#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5864736940335832070LL;
long long int var_1 = 2770764677800757762LL;
unsigned long long int var_2 = 92479896610667281ULL;
long long int var_3 = 3559779279947766379LL;
long long int var_5 = 2444806484769525039LL;
unsigned long long int var_6 = 2059080120741248386ULL;
long long int var_7 = -6864747762699102683LL;
unsigned long long int var_8 = 2430415310852959775ULL;
unsigned long long int var_9 = 11646886858130281796ULL;
long long int var_11 = -291091492271422425LL;
unsigned long long int var_12 = 10526152028255055868ULL;
long long int var_17 = 7052505376609342369LL;
int zero = 0;
long long int var_19 = 743021807920591540LL;
unsigned long long int var_20 = 12484915592077595955ULL;
unsigned long long int var_21 = 13253099908735143474ULL;
unsigned long long int var_22 = 8943199318943352919ULL;
long long int var_23 = -7827311506457135133LL;
unsigned long long int var_24 = 7052404200766277243ULL;
long long int var_25 = 5798780200658484098LL;
long long int var_26 = -952064301555949723LL;
unsigned long long int arr_1 [22] ;
unsigned long long int arr_2 [22] [22] ;
unsigned long long int arr_7 [22] ;
long long int arr_9 [22] [22] [22] ;
long long int arr_15 [22] [22] [22] [22] ;
unsigned long long int arr_17 [22] [22] [22] [22] ;
unsigned long long int arr_11 [22] [22] [22] [22] [22] [22] [22] ;
long long int arr_22 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 13863421870906937582ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 12581357389384834306ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 18189816415592523783ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -6550163776644184376LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = -8579008396498219558LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 2433537906864565864ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_4 % 2 == 0) ? 4966270758308508030ULL : 1431864707117352499ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 7377961131775522380LL : -370152192454361937LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
