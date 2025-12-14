#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-52;
signed char var_7 = (signed char)-13;
unsigned long long int var_10 = 18303162326151239277ULL;
int var_16 = 1397070286;
unsigned short var_18 = (unsigned short)55591;
unsigned char var_19 = (unsigned char)237;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-13023;
short var_22 = (short)-8940;
void init() {
}

void checksum() {
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
