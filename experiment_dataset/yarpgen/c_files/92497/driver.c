#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4505571806153752614LL;
short var_5 = (short)-15063;
short var_13 = (short)9774;
int zero = 0;
unsigned short var_17 = (unsigned short)50923;
unsigned long long int var_18 = 8576618671875010202ULL;
void init() {
}

void checksum() {
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
