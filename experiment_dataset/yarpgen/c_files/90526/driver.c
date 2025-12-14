#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 999909261U;
unsigned short var_5 = (unsigned short)53397;
long long int var_7 = 9191535632205055441LL;
int zero = 0;
long long int var_10 = 4477907098284861211LL;
unsigned char var_11 = (unsigned char)10;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
