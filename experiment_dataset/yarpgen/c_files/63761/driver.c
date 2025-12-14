#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 615588106480214440ULL;
unsigned short var_12 = (unsigned short)50623;
unsigned long long int var_14 = 17966517254464446458ULL;
signed char var_15 = (signed char)116;
int zero = 0;
unsigned short var_16 = (unsigned short)32344;
unsigned char var_17 = (unsigned char)138;
unsigned long long int var_18 = 14591310226703209344ULL;
unsigned long long int var_19 = 5439667470472888603ULL;
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
