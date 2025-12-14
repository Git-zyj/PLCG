#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -208014504;
signed char var_9 = (signed char)-61;
unsigned short var_11 = (unsigned short)18285;
int var_12 = -770441506;
int zero = 0;
int var_17 = -637508394;
unsigned int var_18 = 2075797020U;
long long int var_19 = 9002036675626296806LL;
int var_20 = 1668098963;
void init() {
}

void checksum() {
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
