#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9824;
long long int var_7 = -542735992745598779LL;
long long int var_8 = 6490822548461392969LL;
long long int var_11 = -8511019788453811373LL;
signed char var_15 = (signed char)48;
unsigned long long int var_16 = 82191876143934099ULL;
unsigned short var_19 = (unsigned short)29509;
int zero = 0;
long long int var_20 = -8791352000898041002LL;
unsigned int var_21 = 727928595U;
unsigned long long int var_22 = 5774307505135034877ULL;
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
