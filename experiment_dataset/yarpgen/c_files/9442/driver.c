#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 13152964960905528739ULL;
unsigned long long int var_9 = 14872943990289166382ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)82;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-20140;
unsigned short var_14 = (unsigned short)48499;
unsigned char var_15 = (unsigned char)164;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
