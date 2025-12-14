#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)21092;
unsigned char var_8 = (unsigned char)205;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 4658108260670346235ULL;
int var_13 = 1705514208;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
