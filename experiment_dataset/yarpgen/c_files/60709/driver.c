#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 3260420708649187507LL;
_Bool var_9 = (_Bool)1;
short var_11 = (short)-4061;
_Bool var_13 = (_Bool)1;
unsigned int var_17 = 4007631162U;
int zero = 0;
unsigned long long int var_18 = 16050622823948487259ULL;
signed char var_19 = (signed char)-50;
unsigned int var_20 = 2565559317U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
