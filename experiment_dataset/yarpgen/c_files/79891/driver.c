#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)148;
signed char var_6 = (signed char)-37;
signed char var_9 = (signed char)0;
int var_10 = -619124595;
unsigned long long int var_11 = 10826134487312841087ULL;
int var_15 = -368005305;
signed char var_16 = (signed char)91;
unsigned long long int var_17 = 12169888431541543058ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)47;
signed char var_19 = (signed char)-98;
short var_20 = (short)-20359;
short var_21 = (short)26387;
int var_22 = -1178123329;
unsigned long long int var_23 = 17015410589431027946ULL;
unsigned long long int var_24 = 5948852421044216149ULL;
unsigned char var_25 = (unsigned char)254;
signed char arr_0 [21] ;
int arr_2 [21] ;
int arr_4 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)124;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 692348211;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 192390852;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
