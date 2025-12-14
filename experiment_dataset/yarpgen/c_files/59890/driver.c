#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2102395126U;
long long int var_6 = 4104292801886024970LL;
unsigned int var_11 = 3441137789U;
signed char var_13 = (signed char)-11;
int zero = 0;
unsigned long long int var_19 = 4857555142879391338ULL;
unsigned char var_20 = (unsigned char)158;
long long int var_21 = 4433493122502185163LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
