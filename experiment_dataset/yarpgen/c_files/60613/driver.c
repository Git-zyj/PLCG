#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 5524112247553988958ULL;
unsigned short var_3 = (unsigned short)19344;
short var_5 = (short)24559;
unsigned char var_9 = (unsigned char)1;
unsigned long long int var_10 = 13030245299565117627ULL;
unsigned char var_13 = (unsigned char)188;
int var_14 = -1922984146;
int zero = 0;
int var_15 = 1933263711;
int var_16 = -1079763856;
_Bool var_17 = (_Bool)0;
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
