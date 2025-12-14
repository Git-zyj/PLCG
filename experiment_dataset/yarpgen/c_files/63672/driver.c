#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)240;
signed char var_3 = (signed char)97;
unsigned char var_4 = (unsigned char)83;
unsigned char var_5 = (unsigned char)185;
long long int var_7 = -742013416824820890LL;
long long int var_8 = 5136101614913791372LL;
unsigned short var_9 = (unsigned short)47199;
unsigned short var_10 = (unsigned short)62862;
short var_12 = (short)16328;
unsigned char var_14 = (unsigned char)110;
int zero = 0;
unsigned int var_18 = 1448073732U;
unsigned char var_19 = (unsigned char)15;
unsigned char var_20 = (unsigned char)219;
unsigned short var_21 = (unsigned short)48114;
unsigned char var_22 = (unsigned char)219;
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
