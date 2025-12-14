#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1946029825696636862LL;
long long int var_1 = -651453721565289628LL;
unsigned char var_3 = (unsigned char)25;
long long int var_6 = -3672315259139064966LL;
short var_8 = (short)-19962;
long long int var_9 = -5951213669782362497LL;
signed char var_13 = (signed char)108;
unsigned char var_14 = (unsigned char)59;
short var_15 = (short)18635;
int zero = 0;
long long int var_16 = -6199794850211217805LL;
unsigned short var_17 = (unsigned short)33182;
long long int var_18 = -8817426514347953409LL;
long long int var_19 = -8650304366026768658LL;
unsigned long long int var_20 = 6613857123391017893ULL;
unsigned int arr_0 [16] ;
signed char arr_1 [16] [16] ;
long long int arr_2 [16] [16] [16] ;
long long int arr_10 [10] [10] ;
unsigned char arr_11 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 16175551U : 163416896U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-2;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 3051667604169076184LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = -4894387559632094405LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned char)70;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
