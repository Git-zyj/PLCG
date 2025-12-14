#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9369;
unsigned long long int var_2 = 17331067364028742970ULL;
int var_8 = 610332475;
unsigned char var_9 = (unsigned char)77;
long long int var_11 = 7231719293665799343LL;
int zero = 0;
signed char var_12 = (signed char)-125;
int var_13 = -620915159;
unsigned short var_14 = (unsigned short)64766;
unsigned long long int var_15 = 6631671835383367063ULL;
_Bool var_16 = (_Bool)0;
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
