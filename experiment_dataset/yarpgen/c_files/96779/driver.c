#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)77;
unsigned int var_1 = 4077176690U;
_Bool var_2 = (_Bool)0;
short var_5 = (short)-26432;
unsigned char var_8 = (unsigned char)133;
unsigned int var_9 = 3989609606U;
short var_11 = (short)-31216;
int zero = 0;
int var_12 = 1754187593;
unsigned int var_13 = 3291708869U;
signed char var_14 = (signed char)-70;
signed char var_15 = (signed char)96;
short var_16 = (short)-32632;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
