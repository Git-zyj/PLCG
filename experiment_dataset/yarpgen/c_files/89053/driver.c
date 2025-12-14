#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-76;
unsigned long long int var_1 = 1578928335203762953ULL;
_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)35;
unsigned short var_8 = (unsigned short)45522;
unsigned char var_11 = (unsigned char)122;
unsigned char var_14 = (unsigned char)111;
int zero = 0;
short var_15 = (short)4600;
unsigned long long int var_16 = 6168126208182567732ULL;
int var_17 = 306850402;
int var_18 = -2121286724;
unsigned char var_19 = (unsigned char)167;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
