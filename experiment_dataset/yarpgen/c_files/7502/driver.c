#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 635456178U;
unsigned long long int var_2 = 9846672870857587368ULL;
unsigned long long int var_3 = 11766376600241067967ULL;
unsigned int var_4 = 817420377U;
unsigned short var_5 = (unsigned short)51740;
unsigned long long int var_8 = 3779548277156699772ULL;
int zero = 0;
long long int var_10 = 5788973306880357958LL;
signed char var_11 = (signed char)-48;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
