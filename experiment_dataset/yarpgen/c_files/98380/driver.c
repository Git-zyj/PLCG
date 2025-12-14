#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2137438975;
int var_2 = -709324922;
int var_5 = 1707856532;
int var_7 = 1445661515;
unsigned long long int var_8 = 17326336220773226868ULL;
unsigned long long int var_10 = 12667105108781340207ULL;
int var_11 = 612372032;
int var_12 = -848739745;
int var_15 = -2554954;
int var_16 = 98258527;
int var_17 = 1224868099;
unsigned long long int var_18 = 17946017872944942260ULL;
int zero = 0;
unsigned long long int var_19 = 6466025297720698467ULL;
int var_20 = 289466610;
unsigned long long int var_21 = 6928713459851138841ULL;
unsigned long long int var_22 = 7357724032145585123ULL;
int var_23 = -1570688933;
unsigned long long int var_24 = 1940514377425419097ULL;
unsigned long long int var_25 = 5758621310118107941ULL;
int var_26 = 832532737;
unsigned long long int var_27 = 16279403299459302548ULL;
unsigned long long int var_28 = 7872545583451188878ULL;
unsigned long long int var_29 = 3866688397870453383ULL;
unsigned long long int var_30 = 2906392469914878767ULL;
unsigned long long int var_31 = 5769932807927334647ULL;
int var_32 = 1451268540;
unsigned long long int var_33 = 7052033946880035465ULL;
unsigned long long int var_34 = 16110939441561534004ULL;
int var_35 = 2120536079;
int var_36 = 675185521;
unsigned long long int var_37 = 15482767420760589047ULL;
int var_38 = 1888608465;
int var_39 = 954756005;
unsigned long long int var_40 = 4887650489148039480ULL;
int var_41 = 1949898402;
unsigned long long int var_42 = 3562209696558138551ULL;
unsigned long long int arr_0 [11] ;
unsigned long long int arr_1 [11] [11] ;
int arr_2 [11] [11] ;
unsigned long long int arr_5 [11] [11] ;
int arr_6 [21] ;
unsigned long long int arr_7 [21] ;
int arr_10 [10] [10] ;
int arr_11 [10] [10] ;
unsigned long long int arr_21 [20] ;
int arr_22 [20] ;
int arr_24 [20] ;
int arr_26 [20] ;
int arr_8 [21] ;
int arr_27 [20] [20] ;
unsigned long long int arr_32 [20] [20] [20] [20] [20] ;
int arr_33 [20] [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 6387399892639735335ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 2696854803800223591ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = -1011072456;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 2989173024006678597ULL : 6109773439627273721ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = -1589115956;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 12116011439996988959ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = -2020168370;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = 1632311654;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_21 [i_0] = 12356846487531685774ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_22 [i_0] = -365047183;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_24 [i_0] = -1698250691;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_26 [i_0] = 1586596351;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = -1071147341;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_27 [i_0] [i_1] = 727524190;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = 806843521324857007ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] = 1050879206;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        hash(&seed, arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        hash(&seed, arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
