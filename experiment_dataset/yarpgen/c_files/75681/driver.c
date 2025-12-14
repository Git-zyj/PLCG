#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 3705463164042373323LL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_9 = 8188690294566940085ULL;
unsigned short var_10 = (unsigned short)33942;
unsigned short var_13 = (unsigned short)22337;
unsigned char var_14 = (unsigned char)228;
int var_15 = -1660617353;
int zero = 0;
unsigned char var_16 = (unsigned char)228;
unsigned short var_17 = (unsigned short)4090;
signed char var_18 = (signed char)65;
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
