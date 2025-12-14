#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6281209135589483501ULL;
unsigned long long int var_6 = 7876239602401692144ULL;
unsigned short var_8 = (unsigned short)4844;
int zero = 0;
unsigned short var_14 = (unsigned short)23086;
long long int var_15 = 7037896174395143808LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
