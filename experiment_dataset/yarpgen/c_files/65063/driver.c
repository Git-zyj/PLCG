#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)196;
unsigned int var_4 = 2504209702U;
int var_7 = 1253455953;
signed char var_11 = (signed char)-35;
long long int var_12 = -2053440112404944271LL;
int zero = 0;
unsigned long long int var_17 = 12712687317018284566ULL;
unsigned short var_18 = (unsigned short)33972;
unsigned char var_19 = (unsigned char)167;
signed char var_20 = (signed char)2;
int var_21 = 1502756127;
_Bool var_22 = (_Bool)0;
signed char arr_0 [25] [25] ;
unsigned short arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-29;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)44020 : (unsigned short)43997;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
