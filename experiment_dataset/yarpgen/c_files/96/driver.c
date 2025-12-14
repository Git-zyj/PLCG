#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10703270581319725174ULL;
long long int var_4 = -4533161324003073115LL;
short var_7 = (short)5119;
unsigned short var_8 = (unsigned short)39556;
unsigned long long int var_12 = 4998954825230982612ULL;
unsigned int var_13 = 71129518U;
int zero = 0;
unsigned long long int var_17 = 5231515352432735401ULL;
int var_18 = 1250413251;
long long int var_19 = -4143535945735156385LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
