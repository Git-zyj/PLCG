#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15033735187536608457ULL;
short var_1 = (short)13015;
unsigned short var_2 = (unsigned short)14702;
signed char var_3 = (signed char)-41;
long long int var_5 = -1392653278045124610LL;
long long int var_6 = -7209146964190478208LL;
int var_7 = 670932479;
unsigned long long int var_9 = 377570723146290210ULL;
int zero = 0;
unsigned int var_10 = 874192540U;
unsigned short var_11 = (unsigned short)49996;
unsigned short var_12 = (unsigned short)31280;
signed char var_13 = (signed char)-119;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
