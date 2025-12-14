#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1363471323U;
long long int var_4 = 2478524678191644309LL;
long long int var_6 = 3989772706000286499LL;
long long int var_7 = 2529163770102573815LL;
long long int var_8 = 8188350993105651974LL;
unsigned int var_9 = 1925054431U;
unsigned int var_11 = 3410080232U;
int zero = 0;
unsigned int var_12 = 3508483684U;
unsigned int var_13 = 3039386994U;
void init() {
}

void checksum() {
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
