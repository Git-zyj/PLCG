#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)64;
unsigned int var_6 = 1288076528U;
unsigned long long int var_8 = 14475183187759036440ULL;
short var_10 = (short)-32679;
short var_13 = (short)-20237;
unsigned long long int var_15 = 18123814915160636567ULL;
int zero = 0;
unsigned long long int var_16 = 14079530320081474617ULL;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)120;
unsigned long long int var_19 = 10173380600182011773ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
