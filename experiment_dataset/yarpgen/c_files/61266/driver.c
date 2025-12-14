#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-120;
short var_2 = (short)-6991;
unsigned short var_3 = (unsigned short)44516;
unsigned long long int var_5 = 11452445601343907681ULL;
short var_7 = (short)-2187;
unsigned char var_8 = (unsigned char)204;
int zero = 0;
unsigned long long int var_10 = 16424675333041553969ULL;
signed char var_11 = (signed char)97;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
