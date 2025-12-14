#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 783131510561621914ULL;
unsigned int var_3 = 4161684128U;
unsigned short var_7 = (unsigned short)20795;
int var_8 = 1422085283;
long long int var_9 = 976065848754417193LL;
unsigned short var_11 = (unsigned short)953;
int zero = 0;
unsigned int var_15 = 1781000140U;
unsigned int var_16 = 4257474159U;
unsigned short var_17 = (unsigned short)25885;
unsigned short var_18 = (unsigned short)11974;
unsigned short var_19 = (unsigned short)18565;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
