#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)8560;
unsigned short var_3 = (unsigned short)62730;
unsigned short var_9 = (unsigned short)28932;
long long int var_10 = -5880253815219999825LL;
unsigned short var_12 = (unsigned short)59691;
long long int var_13 = 2491144985334925160LL;
long long int var_15 = 7432190199551291286LL;
int zero = 0;
unsigned short var_16 = (unsigned short)26378;
long long int var_17 = -3853903775746229927LL;
unsigned short var_18 = (unsigned short)19188;
void init() {
}

void checksum() {
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
