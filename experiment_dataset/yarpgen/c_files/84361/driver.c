#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)235;
unsigned int var_6 = 1547492368U;
short var_7 = (short)23088;
unsigned char var_10 = (unsigned char)119;
int zero = 0;
unsigned short var_18 = (unsigned short)40862;
unsigned int var_19 = 803296919U;
short var_20 = (short)9795;
unsigned int var_21 = 389740154U;
unsigned int var_22 = 964024691U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
