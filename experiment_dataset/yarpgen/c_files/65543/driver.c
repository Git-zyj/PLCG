#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -138396897;
signed char var_2 = (signed char)-10;
unsigned int var_6 = 3048098371U;
long long int var_7 = 3931169760268809326LL;
unsigned long long int var_9 = 17860927426469834667ULL;
long long int var_10 = -892635523280772368LL;
int zero = 0;
unsigned long long int var_11 = 8281691990724109684ULL;
unsigned long long int var_12 = 8409160460827989018ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
