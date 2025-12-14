#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25790;
unsigned short var_2 = (unsigned short)24220;
short var_3 = (short)-31568;
signed char var_6 = (signed char)-126;
short var_7 = (short)-25883;
signed char var_8 = (signed char)-62;
unsigned char var_9 = (unsigned char)205;
unsigned long long int var_11 = 17962799940446649022ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)56853;
long long int var_13 = -4000626083786597742LL;
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
