#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51135;
unsigned short var_1 = (unsigned short)55239;
unsigned short var_3 = (unsigned short)17966;
unsigned short var_5 = (unsigned short)18867;
unsigned char var_7 = (unsigned char)69;
unsigned short var_8 = (unsigned short)38187;
unsigned short var_9 = (unsigned short)37608;
unsigned short var_12 = (unsigned short)47107;
signed char var_13 = (signed char)101;
unsigned int var_14 = 3553028147U;
int zero = 0;
unsigned short var_16 = (unsigned short)37319;
unsigned short var_17 = (unsigned short)64869;
unsigned short var_18 = (unsigned short)59677;
unsigned char var_19 = (unsigned char)3;
unsigned short var_20 = (unsigned short)10153;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
