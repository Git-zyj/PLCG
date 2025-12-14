#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15079;
short var_2 = (short)4017;
int var_3 = 781200795;
int var_4 = -325826723;
int var_5 = 502466908;
short var_6 = (short)12228;
short var_7 = (short)23288;
short var_8 = (short)-16091;
short var_9 = (short)14389;
int var_10 = -365780449;
short var_11 = (short)28347;
short var_12 = (short)-27471;
short var_13 = (short)16900;
int var_14 = 1380733651;
int var_15 = -600193690;
int zero = 0;
short var_16 = (short)28250;
short var_17 = (short)-26363;
short var_18 = (short)-7830;
int var_19 = -1541397147;
int var_20 = 470318790;
int var_21 = 827515505;
int var_22 = -1145904610;
int var_23 = -1320780023;
int var_24 = 137636542;
short var_25 = (short)-18951;
short var_26 = (short)-27252;
short var_27 = (short)29724;
int var_28 = -1553108370;
int var_29 = 1928906507;
short var_30 = (short)6647;
short var_31 = (short)26778;
short var_32 = (short)15487;
int var_33 = -737788632;
int arr_0 [25] ;
int arr_1 [25] [25] ;
int arr_3 [25] ;
short arr_4 [25] ;
int arr_5 [25] [25] [25] ;
short arr_6 [25] [25] [25] ;
int arr_8 [25] [25] ;
int arr_9 [25] ;
short arr_10 [25] ;
int arr_15 [25] [25] [25] [25] [25] ;
int arr_16 [25] [25] [25] [25] [25] ;
short arr_18 [25] [25] [25] [25] ;
int arr_20 [25] [25] [25] [25] ;
short arr_22 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 885988783 : -1158719030;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 2007947122;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -1927904317;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)23897 : (short)17818;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -262255340;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)31776;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = -625086338;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = 696544294;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (short)-32669;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = 2067378375;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = -1610931340;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)-19522 : (short)21145;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = -416013143;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)14484 : (short)14352;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
