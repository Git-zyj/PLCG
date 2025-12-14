#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1963696174;
unsigned char var_4 = (unsigned char)204;
signed char var_7 = (signed char)54;
unsigned long long int var_9 = 6690658637757543664ULL;
unsigned char var_11 = (unsigned char)252;
long long int var_12 = -7678378558471139198LL;
int zero = 0;
signed char var_13 = (signed char)111;
int var_14 = 306471665;
unsigned long long int var_15 = 14847902182373713596ULL;
int var_16 = -537848629;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
