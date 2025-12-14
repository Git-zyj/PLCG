#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)9888;
short var_11 = (short)22002;
unsigned char var_12 = (unsigned char)1;
long long int var_14 = 2885174044762252212LL;
signed char var_15 = (signed char)63;
unsigned char var_16 = (unsigned char)76;
int var_17 = -868140681;
int zero = 0;
short var_19 = (short)-24808;
short var_20 = (short)-5515;
long long int var_21 = -7315219329825037950LL;
void init() {
}

void checksum() {
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
