#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)159;
unsigned short var_5 = (unsigned short)32340;
unsigned char var_8 = (unsigned char)20;
unsigned short var_15 = (unsigned short)26792;
int zero = 0;
unsigned short var_18 = (unsigned short)18746;
unsigned long long int var_19 = 9645888321650812023ULL;
unsigned short var_20 = (unsigned short)44516;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
