#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)26;
unsigned char var_2 = (unsigned char)188;
unsigned short var_4 = (unsigned short)29586;
unsigned char var_6 = (unsigned char)241;
unsigned char var_7 = (unsigned char)165;
unsigned short var_8 = (unsigned short)64363;
unsigned short var_9 = (unsigned short)12255;
int var_10 = 965504823;
int var_12 = 2114343982;
signed char var_13 = (signed char)-86;
int zero = 0;
int var_14 = -149652241;
unsigned char var_15 = (unsigned char)25;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)39538;
unsigned short var_18 = (unsigned short)15349;
unsigned short var_19 = (unsigned short)45662;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
