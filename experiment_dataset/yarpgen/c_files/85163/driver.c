#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)83;
short var_7 = (short)-7406;
signed char var_11 = (signed char)9;
unsigned short var_14 = (unsigned short)9353;
int var_18 = 1768812726;
int zero = 0;
long long int var_20 = 5714740975193220372LL;
unsigned int var_21 = 3555492254U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
