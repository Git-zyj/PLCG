#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17888405886986762145ULL;
unsigned int var_4 = 408678171U;
signed char var_6 = (signed char)-111;
unsigned int var_7 = 4156138463U;
_Bool var_10 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-107;
long long int var_20 = -8126132899077990956LL;
unsigned int var_21 = 1217018676U;
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
