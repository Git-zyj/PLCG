#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26599;
unsigned int var_7 = 2051419524U;
unsigned long long int var_17 = 8087099466366934475ULL;
int zero = 0;
unsigned long long int var_18 = 13744819935228542566ULL;
short var_19 = (short)4871;
void init() {
}

void checksum() {
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
