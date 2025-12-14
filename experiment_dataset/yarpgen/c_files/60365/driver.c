#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-58;
unsigned char var_1 = (unsigned char)115;
int var_2 = -930553680;
unsigned long long int var_3 = 4730733289263236316ULL;
short var_4 = (short)-1793;
long long int var_6 = -2043211916757955440LL;
unsigned long long int var_7 = 13825125300458533370ULL;
unsigned int var_9 = 3794741761U;
int zero = 0;
unsigned char var_10 = (unsigned char)75;
signed char var_11 = (signed char)-42;
long long int var_12 = 2595393420866141402LL;
unsigned char var_13 = (unsigned char)122;
unsigned short var_14 = (unsigned short)50918;
unsigned short var_15 = (unsigned short)6381;
unsigned int var_16 = 1099754708U;
int var_17 = 807053225;
unsigned short var_18 = (unsigned short)34959;
unsigned long long int arr_3 [12] ;
unsigned int arr_6 [12] [12] [12] [12] ;
unsigned int arr_7 [12] [12] [12] [12] ;
unsigned char arr_8 [12] [12] [12] [12] ;
long long int arr_10 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 10612077996441126401ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 2603401079U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 1541949620U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 8136036575992469062LL : -130502624359816363LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
