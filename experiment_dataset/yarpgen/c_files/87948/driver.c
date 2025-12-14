#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)103;
signed char var_1 = (signed char)61;
unsigned long long int var_2 = 6502436096576720809ULL;
int var_3 = 1548679703;
long long int var_4 = 5959088997768104045LL;
signed char var_6 = (signed char)10;
long long int var_7 = 2146973686363401328LL;
signed char var_9 = (signed char)-17;
int zero = 0;
short var_10 = (short)-6146;
signed char var_11 = (signed char)-100;
unsigned char var_12 = (unsigned char)225;
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
