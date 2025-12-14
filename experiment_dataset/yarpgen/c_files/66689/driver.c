#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 2122040226;
unsigned short var_4 = (unsigned short)17260;
signed char var_8 = (signed char)83;
unsigned long long int var_13 = 17236338356622484882ULL;
long long int var_14 = -9132468978266080638LL;
int zero = 0;
int var_15 = -209193091;
unsigned short var_16 = (unsigned short)31829;
void init() {
}

void checksum() {
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
