#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2087838391;
int var_4 = -560376942;
int var_6 = 131692301;
unsigned short var_7 = (unsigned short)51007;
int zero = 0;
unsigned int var_16 = 964477133U;
long long int var_17 = 8920612449033512458LL;
unsigned short var_18 = (unsigned short)38818;
unsigned int var_19 = 3566442946U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
