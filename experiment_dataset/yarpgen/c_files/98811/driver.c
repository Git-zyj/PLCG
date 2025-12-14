#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 334287532929195936ULL;
int var_10 = -310802464;
_Bool var_11 = (_Bool)0;
long long int var_15 = -4859501038098158439LL;
int zero = 0;
long long int var_18 = -4268157240323304351LL;
unsigned char var_19 = (unsigned char)54;
unsigned long long int var_20 = 5454201072104672752ULL;
unsigned int var_21 = 515504182U;
long long int var_22 = 6706186760923737318LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
