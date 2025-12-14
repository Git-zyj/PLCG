#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)25020;
unsigned short var_9 = (unsigned short)1926;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)45781;
unsigned int var_17 = 2448297375U;
unsigned int var_18 = 417988630U;
long long int var_19 = -1239132822302456462LL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
