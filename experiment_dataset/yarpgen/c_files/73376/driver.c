#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-225;
signed char var_2 = (signed char)75;
unsigned long long int var_3 = 11194783096308930608ULL;
unsigned long long int var_8 = 2310442625949809944ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)50843;
short var_11 = (short)-21050;
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
