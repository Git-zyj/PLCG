#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15505;
unsigned short var_2 = (unsigned short)13416;
short var_4 = (short)-10395;
unsigned char var_6 = (unsigned char)144;
unsigned long long int var_7 = 6205885496518224104ULL;
unsigned long long int var_9 = 2440864709301566885ULL;
unsigned int var_13 = 2883288216U;
int zero = 0;
short var_15 = (short)3146;
unsigned int var_16 = 2449248296U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
