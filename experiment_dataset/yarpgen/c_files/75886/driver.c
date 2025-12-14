#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)36;
unsigned long long int var_3 = 10884403356956051825ULL;
short var_7 = (short)10376;
int var_13 = 561073999;
short var_17 = (short)11456;
unsigned int var_18 = 1440872068U;
int zero = 0;
short var_19 = (short)20798;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2249609284U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
