#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)32700;
long long int var_6 = -160402723179933713LL;
unsigned short var_10 = (unsigned short)6750;
unsigned char var_13 = (unsigned char)155;
unsigned char var_14 = (unsigned char)127;
int zero = 0;
unsigned short var_17 = (unsigned short)133;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)103;
int var_20 = 1485968687;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
