#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 15319255U;
unsigned short var_5 = (unsigned short)49413;
signed char var_6 = (signed char)53;
_Bool var_7 = (_Bool)0;
unsigned short var_16 = (unsigned short)30010;
int zero = 0;
int var_18 = -1656543875;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 5906051065013520203ULL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
