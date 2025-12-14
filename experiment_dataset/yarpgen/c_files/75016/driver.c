#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31904;
long long int var_1 = -7044520435788866113LL;
signed char var_2 = (signed char)-122;
long long int var_3 = 7921764144999851527LL;
unsigned short var_4 = (unsigned short)44454;
signed char var_7 = (signed char)-57;
long long int var_9 = 7997310794337026219LL;
int zero = 0;
long long int var_10 = 4204974100832601081LL;
unsigned short var_11 = (unsigned short)45049;
signed char var_12 = (signed char)84;
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
