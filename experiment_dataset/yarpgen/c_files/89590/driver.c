#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8172325774303128763LL;
unsigned char var_6 = (unsigned char)97;
long long int var_7 = -9171370768018892252LL;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned short var_11 = (unsigned short)59183;
short var_12 = (short)-29505;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
