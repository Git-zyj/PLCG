#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_5 = (short)11572;
unsigned long long int var_6 = 13735968552906102244ULL;
unsigned long long int var_7 = 8213830998379755953ULL;
int zero = 0;
short var_11 = (short)-31406;
unsigned char var_12 = (unsigned char)47;
unsigned char var_13 = (unsigned char)125;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 4064707072U;
void init() {
}

void checksum() {
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
