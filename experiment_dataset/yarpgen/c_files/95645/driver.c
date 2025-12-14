#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9406485652246713805ULL;
unsigned int var_10 = 2843319347U;
unsigned long long int var_14 = 3206161796987798021ULL;
unsigned short var_18 = (unsigned short)52248;
int zero = 0;
unsigned long long int var_19 = 14292400590222349636ULL;
unsigned int var_20 = 204237455U;
unsigned int var_21 = 2596601011U;
void init() {
}

void checksum() {
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
