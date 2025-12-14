#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1721009699U;
unsigned long long int var_3 = 3239855166527552934ULL;
int var_5 = -769729430;
unsigned char var_8 = (unsigned char)125;
int var_9 = -170307122;
short var_17 = (short)-4999;
int zero = 0;
unsigned long long int var_19 = 14829473735128408473ULL;
short var_20 = (short)5927;
_Bool var_21 = (_Bool)0;
long long int var_22 = 8519862338519273232LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
