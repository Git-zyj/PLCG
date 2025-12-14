#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -936847893200710931LL;
long long int var_7 = -8566539335745620913LL;
long long int var_8 = -9081177968491450650LL;
int zero = 0;
unsigned int var_14 = 853574235U;
unsigned int var_15 = 3472293714U;
long long int var_16 = 146519089173919239LL;
void init() {
}

void checksum() {
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
