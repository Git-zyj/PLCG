#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)3666;
unsigned long long int var_9 = 9656578398090798932ULL;
int var_11 = 1976971737;
long long int var_12 = 8282084621825397362LL;
int zero = 0;
signed char var_16 = (signed char)-96;
unsigned long long int var_17 = 9878653780176258157ULL;
int var_18 = 1571006508;
int var_19 = 233305094;
void init() {
}

void checksum() {
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
