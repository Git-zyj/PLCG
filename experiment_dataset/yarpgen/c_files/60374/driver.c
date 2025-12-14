#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-7789;
_Bool var_6 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)-11;
int var_15 = 571516271;
long long int var_16 = -4852293629274806403LL;
unsigned char var_17 = (unsigned char)164;
short var_18 = (short)-20223;
unsigned long long int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 9305508034559906582ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
