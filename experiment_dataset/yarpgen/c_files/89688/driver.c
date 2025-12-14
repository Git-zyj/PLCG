#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14982;
unsigned long long int var_1 = 10020811350787822371ULL;
unsigned char var_3 = (unsigned char)217;
int var_4 = 454092937;
long long int var_5 = 8699795129321669483LL;
unsigned char var_7 = (unsigned char)60;
signed char var_8 = (signed char)1;
unsigned long long int var_9 = 13877660768889026090ULL;
short var_10 = (short)25565;
signed char var_11 = (signed char)-107;
unsigned char var_12 = (unsigned char)50;
int zero = 0;
long long int var_13 = -6809729424586271032LL;
unsigned char var_14 = (unsigned char)252;
unsigned long long int var_15 = 2685087919200940529ULL;
unsigned char var_16 = (unsigned char)150;
unsigned char arr_0 [11] ;
signed char arr_1 [11] [11] ;
short arr_2 [11] [11] ;
unsigned char arr_3 [11] [11] ;
short arr_6 [11] ;
long long int arr_8 [11] [11] ;
unsigned char arr_9 [11] ;
signed char arr_10 [11] [11] [11] [11] ;
long long int arr_11 [11] [11] [11] [11] [11] ;
signed char arr_4 [11] ;
signed char arr_5 [11] ;
long long int arr_12 [11] [11] [11] [11] ;
unsigned long long int arr_13 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-4;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-4721;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (short)-19865;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 9125096022996750895LL : -20022335022184498LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)60 : (unsigned char)170;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (signed char)-81;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = 5655426401404620278LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (signed char)-53;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -419177644874481889LL : 8185973641093045199LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = 5090891779467238438ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
