#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)154;
short var_3 = (short)-3540;
unsigned char var_5 = (unsigned char)68;
unsigned char var_11 = (unsigned char)151;
int zero = 0;
long long int var_13 = 3791787630009792037LL;
int var_14 = 999681211;
void init() {
}

void checksum() {
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
