#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)194;
long long int var_7 = 2771226591758795363LL;
_Bool var_9 = (_Bool)0;
unsigned int var_16 = 1212696602U;
int zero = 0;
signed char var_17 = (signed char)-41;
unsigned char var_18 = (unsigned char)177;
unsigned char var_19 = (unsigned char)162;
unsigned short var_20 = (unsigned short)57205;
unsigned long long int var_21 = 4998806168342938169ULL;
unsigned short arr_1 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)55510;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
