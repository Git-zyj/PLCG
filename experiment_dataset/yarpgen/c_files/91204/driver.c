#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19511;
signed char var_1 = (signed char)-13;
_Bool var_2 = (_Bool)0;
int var_4 = 574885773;
signed char var_5 = (signed char)43;
short var_7 = (short)-22945;
int var_10 = 824476000;
unsigned short var_11 = (unsigned short)35352;
short var_12 = (short)-4022;
unsigned long long int var_16 = 13433437902244782518ULL;
signed char var_17 = (signed char)52;
int zero = 0;
short var_20 = (short)23670;
short var_21 = (short)3215;
unsigned long long int var_22 = 4529481484075338060ULL;
void init() {
}

void checksum() {
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
