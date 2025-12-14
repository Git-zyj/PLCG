#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10581;
unsigned char var_2 = (unsigned char)71;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)166;
int var_7 = 407456383;
int var_8 = -487247103;
int var_9 = -717532092;
long long int var_11 = 8325464026170123475LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)190;
unsigned short var_15 = (unsigned short)33522;
unsigned short var_16 = (unsigned short)5555;
unsigned short var_17 = (unsigned short)17666;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
