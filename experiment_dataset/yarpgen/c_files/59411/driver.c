#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 5781826033440654987LL;
unsigned int var_15 = 712612100U;
short var_16 = (short)-25195;
int zero = 0;
short var_20 = (short)6305;
short var_21 = (short)-8903;
long long int var_22 = 430348347118562518LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
