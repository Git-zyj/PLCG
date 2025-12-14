#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -24431882;
unsigned long long int var_3 = 4147659382597111490ULL;
int var_6 = 946565583;
unsigned long long int var_9 = 2764859651629302504ULL;
int var_11 = -1890883830;
int var_12 = 1604774572;
int zero = 0;
int var_14 = -2107082777;
unsigned char var_15 = (unsigned char)92;
unsigned int var_16 = 2745636573U;
int var_17 = -655353065;
int var_18 = 1250829643;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
