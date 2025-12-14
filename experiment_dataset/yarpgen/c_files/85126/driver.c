#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)17075;
signed char var_3 = (signed char)52;
signed char var_13 = (signed char)18;
int zero = 0;
unsigned char var_20 = (unsigned char)162;
unsigned long long int var_21 = 15161059007416035150ULL;
void init() {
}

void checksum() {
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
