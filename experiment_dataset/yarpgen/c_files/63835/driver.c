#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3312362825463665450LL;
signed char var_1 = (signed char)-109;
signed char var_6 = (signed char)-97;
unsigned char var_9 = (unsigned char)5;
int var_12 = -719086190;
int zero = 0;
signed char var_14 = (signed char)-111;
signed char var_15 = (signed char)15;
unsigned long long int var_16 = 15446088686995006578ULL;
unsigned short var_17 = (unsigned short)22132;
short arr_1 [14] ;
unsigned short arr_2 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)22736 : (short)21282;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)17656;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
