#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)73;
short var_2 = (short)-9725;
signed char var_3 = (signed char)16;
unsigned int var_4 = 1940138499U;
unsigned char var_7 = (unsigned char)220;
short var_10 = (short)-27185;
int zero = 0;
long long int var_12 = 2905106170145822226LL;
short var_13 = (short)-27720;
signed char var_14 = (signed char)18;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
