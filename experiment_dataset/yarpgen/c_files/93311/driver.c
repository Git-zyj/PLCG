#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 417938432211600444LL;
long long int var_8 = -7624053547647466050LL;
long long int var_11 = 7212687230145758783LL;
int zero = 0;
long long int var_15 = 6456474056162750347LL;
long long int var_16 = 3089408102458918596LL;
long long int var_17 = -5938009017699565211LL;
long long int var_18 = 7149175799846161114LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
