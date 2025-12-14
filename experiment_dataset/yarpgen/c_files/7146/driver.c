#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 314706630;
_Bool var_7 = (_Bool)1;
int var_8 = -1151331354;
int var_12 = -1708733379;
int zero = 0;
unsigned char var_18 = (unsigned char)37;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)111;
unsigned char var_21 = (unsigned char)118;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
