#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3896058530U;
unsigned short var_5 = (unsigned short)9980;
unsigned short var_8 = (unsigned short)19629;
unsigned char var_9 = (unsigned char)55;
unsigned char var_10 = (unsigned char)76;
_Bool var_11 = (_Bool)1;
int var_14 = -2137575236;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_18 = (short)-19508;
unsigned long long int var_19 = 12182689999875427274ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
