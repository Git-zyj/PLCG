#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3986092505U;
short var_9 = (short)-13860;
unsigned char var_17 = (unsigned char)238;
int zero = 0;
long long int var_19 = -2710150446745355377LL;
long long int var_20 = 1187855099178044679LL;
int var_21 = 1319195310;
void init() {
}

void checksum() {
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
