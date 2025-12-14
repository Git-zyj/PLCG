#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 12318656432348735598ULL;
unsigned short var_13 = (unsigned short)35855;
long long int var_14 = 7409094513766960886LL;
unsigned char var_16 = (unsigned char)203;
int zero = 0;
unsigned int var_18 = 2246275873U;
long long int var_19 = -3721277318171674542LL;
unsigned long long int var_20 = 11657575895171391066ULL;
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
