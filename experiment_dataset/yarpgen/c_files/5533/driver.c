#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)29;
unsigned int var_2 = 290165978U;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 3231801723U;
long long int var_5 = -2614166209737603758LL;
int var_7 = 1271696752;
long long int var_9 = 5405805559615902382LL;
unsigned int var_10 = 968250904U;
unsigned char var_11 = (unsigned char)62;
unsigned int var_12 = 2448878331U;
unsigned int var_14 = 3251130938U;
int zero = 0;
unsigned short var_15 = (unsigned short)4926;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 1264581538U;
void init() {
}

void checksum() {
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
