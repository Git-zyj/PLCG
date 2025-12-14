#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 874606528;
unsigned long long int var_5 = 9249266384010890025ULL;
long long int var_6 = 7263097992392958359LL;
unsigned char var_12 = (unsigned char)232;
int zero = 0;
int var_13 = -667499412;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
