#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)31355;
short var_6 = (short)32266;
unsigned long long int var_7 = 7703372321631370365ULL;
unsigned int var_8 = 1415784807U;
unsigned long long int var_9 = 4653906967454555511ULL;
int zero = 0;
long long int var_16 = -6090613036960259295LL;
signed char var_17 = (signed char)-6;
unsigned int var_18 = 3295403185U;
int var_19 = -1077569679;
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
