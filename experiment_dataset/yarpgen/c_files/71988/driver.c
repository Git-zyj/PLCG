#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)153;
unsigned short var_3 = (unsigned short)29116;
short var_5 = (short)-1586;
signed char var_9 = (signed char)-63;
int zero = 0;
signed char var_10 = (signed char)-108;
unsigned long long int var_11 = 18446369205700840070ULL;
unsigned char var_12 = (unsigned char)159;
int var_13 = -98741967;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
