#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1020612746;
unsigned char var_1 = (unsigned char)191;
int var_2 = 1029508995;
unsigned short var_3 = (unsigned short)399;
signed char var_4 = (signed char)115;
int var_6 = -1106270454;
unsigned char var_8 = (unsigned char)85;
signed char var_9 = (signed char)59;
long long int var_10 = -1481476481233307421LL;
int zero = 0;
unsigned int var_11 = 4003277294U;
unsigned int var_12 = 2600541388U;
void init() {
}

void checksum() {
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
