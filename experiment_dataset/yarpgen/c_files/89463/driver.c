#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 998959963U;
int var_7 = -106083060;
int zero = 0;
unsigned char var_15 = (unsigned char)116;
unsigned int var_16 = 3160499804U;
signed char var_17 = (signed char)-37;
signed char var_18 = (signed char)20;
unsigned char var_19 = (unsigned char)109;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
