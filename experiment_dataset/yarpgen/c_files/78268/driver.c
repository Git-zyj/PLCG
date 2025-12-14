#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5166;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 9849768977460184837ULL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_11 = 5206369524886705940ULL;
int zero = 0;
int var_12 = -1374912093;
_Bool var_13 = (_Bool)1;
long long int var_14 = 3938369796106406651LL;
_Bool var_15 = (_Bool)0;
int var_16 = 118297900;
unsigned long long int var_17 = 4976398426894591498ULL;
unsigned char arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)195 : (unsigned char)66;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
