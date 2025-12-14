#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1455528444593926431LL;
unsigned short var_3 = (unsigned short)28663;
unsigned short var_8 = (unsigned short)62092;
long long int var_9 = 1409221454607365508LL;
int zero = 0;
unsigned long long int var_11 = 9324455052399082526ULL;
long long int var_12 = -6176769655487966375LL;
unsigned short var_13 = (unsigned short)49307;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
