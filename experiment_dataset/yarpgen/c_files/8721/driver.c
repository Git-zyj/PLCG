#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 288118532620455257LL;
long long int var_1 = 7993258328803472158LL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 14006025843312838194ULL;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)7709;
long long int var_8 = -4381731660098210416LL;
signed char var_9 = (signed char)118;
unsigned long long int var_12 = 8961522833122008523ULL;
int zero = 0;
signed char var_15 = (signed char)-5;
long long int var_16 = -5439933564217081273LL;
short var_17 = (short)22333;
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
