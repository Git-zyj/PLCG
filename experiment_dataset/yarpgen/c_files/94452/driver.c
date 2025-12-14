#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 293317118U;
short var_10 = (short)17735;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
int var_15 = 596815943;
int zero = 0;
unsigned short var_16 = (unsigned short)24735;
signed char var_17 = (signed char)-85;
int var_18 = 2061174001;
int var_19 = -326618897;
signed char var_20 = (signed char)-55;
int arr_0 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -1341162009 : 134322143;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
