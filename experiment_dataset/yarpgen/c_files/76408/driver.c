#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-82;
unsigned char var_3 = (unsigned char)192;
unsigned long long int var_5 = 40351899504047154ULL;
unsigned char var_6 = (unsigned char)191;
signed char var_7 = (signed char)-122;
unsigned long long int var_8 = 1577120152628234717ULL;
short var_9 = (short)24065;
short var_11 = (short)11477;
int zero = 0;
short var_12 = (short)-1532;
long long int var_13 = 8358115709718315641LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
