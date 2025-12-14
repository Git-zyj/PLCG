#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)7619;
short var_7 = (short)-21995;
short var_8 = (short)4319;
signed char var_9 = (signed char)-29;
unsigned short var_10 = (unsigned short)19913;
short var_11 = (short)-3808;
unsigned char var_12 = (unsigned char)65;
short var_15 = (short)29027;
unsigned short var_16 = (unsigned short)9349;
short var_17 = (short)-10349;
int zero = 0;
int var_18 = -1208715670;
int var_19 = 1279246870;
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
