#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1822212037U;
unsigned int var_2 = 571216353U;
unsigned long long int var_7 = 10841880579939519523ULL;
int zero = 0;
unsigned int var_13 = 161600648U;
unsigned short var_14 = (unsigned short)52864;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
