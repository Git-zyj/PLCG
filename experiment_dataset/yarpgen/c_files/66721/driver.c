#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9715715636591848909ULL;
unsigned long long int var_1 = 17259052922517751921ULL;
long long int var_2 = 3695400801169594217LL;
short var_3 = (short)-14437;
int var_4 = -885922761;
unsigned char var_5 = (unsigned char)22;
int var_8 = 646779464;
signed char var_9 = (signed char)118;
int zero = 0;
int var_10 = 882102088;
unsigned short var_11 = (unsigned short)29448;
unsigned char var_12 = (unsigned char)171;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
