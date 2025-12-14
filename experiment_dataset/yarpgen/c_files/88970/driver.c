#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)111;
long long int var_1 = -7949371339381833262LL;
unsigned char var_4 = (unsigned char)42;
unsigned long long int var_5 = 11624696383979502967ULL;
int var_6 = -1513535573;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_10 = (short)26711;
unsigned int var_11 = 4267330207U;
unsigned char var_12 = (unsigned char)107;
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
