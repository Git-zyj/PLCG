#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -386478749;
unsigned char var_3 = (unsigned char)76;
long long int var_8 = -6570699949933430778LL;
int zero = 0;
long long int var_18 = -4804539397187885244LL;
int var_19 = 1049101328;
long long int var_20 = 6634267925177143419LL;
long long int var_21 = -1954379478481357006LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
