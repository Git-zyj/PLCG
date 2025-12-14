#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 289050439;
unsigned int var_3 = 1445773482U;
long long int var_6 = 1392219846832454431LL;
unsigned short var_7 = (unsigned short)15900;
short var_15 = (short)-2549;
int zero = 0;
unsigned short var_17 = (unsigned short)47192;
unsigned long long int var_18 = 11937446255577320633ULL;
void init() {
}

void checksum() {
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
