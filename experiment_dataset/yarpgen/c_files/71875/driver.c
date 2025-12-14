#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18459;
_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 5656649750665772217ULL;
signed char var_11 = (signed char)8;
long long int var_13 = 2366318427983453182LL;
int zero = 0;
int var_14 = -1572259188;
short var_15 = (short)-15040;
long long int var_16 = -2550226326809997159LL;
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
