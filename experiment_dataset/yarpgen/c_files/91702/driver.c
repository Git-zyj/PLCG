#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)145;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 396641688U;
int var_9 = 1398735573;
int var_11 = 1224682884;
int var_12 = -555351103;
int zero = 0;
short var_15 = (short)-31017;
int var_16 = 1116615959;
signed char var_17 = (signed char)-87;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
