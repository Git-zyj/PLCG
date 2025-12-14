#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21184;
unsigned long long int var_4 = 15859043159706713196ULL;
unsigned short var_9 = (unsigned short)15518;
long long int var_11 = 6413499392591188256LL;
long long int var_13 = -4336162618752007837LL;
unsigned int var_14 = 3415802649U;
int zero = 0;
signed char var_16 = (signed char)-116;
unsigned int var_17 = 525045721U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
