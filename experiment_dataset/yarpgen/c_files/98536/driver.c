#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)157;
unsigned char var_3 = (unsigned char)190;
int var_5 = 948809875;
short var_7 = (short)7888;
signed char var_8 = (signed char)-106;
_Bool var_9 = (_Bool)0;
unsigned short var_14 = (unsigned short)3014;
short var_15 = (short)31512;
int zero = 0;
unsigned int var_17 = 2018582033U;
unsigned long long int var_18 = 6639634798535467013ULL;
long long int var_19 = 9203872169435778799LL;
void init() {
}

void checksum() {
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
