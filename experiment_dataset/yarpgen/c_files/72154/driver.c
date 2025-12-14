#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -989478085128133365LL;
signed char var_8 = (signed char)-110;
unsigned short var_9 = (unsigned short)19490;
unsigned long long int var_11 = 16982990767393664770ULL;
unsigned int var_14 = 904177819U;
int zero = 0;
signed char var_15 = (signed char)40;
unsigned short var_16 = (unsigned short)28582;
void init() {
}

void checksum() {
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
