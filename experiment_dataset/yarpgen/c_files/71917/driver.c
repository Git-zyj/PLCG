#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1038478720295574113LL;
int var_3 = -1978863711;
short var_9 = (short)23021;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_14 = 4135766068584874430LL;
unsigned int var_15 = 729017981U;
int var_16 = -129806754;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
