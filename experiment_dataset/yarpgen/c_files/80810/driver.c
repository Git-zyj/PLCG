#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_17 = (unsigned short)15884;
unsigned long long int var_18 = 8172318524503206212ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2835564600U;
unsigned char var_22 = (unsigned char)18;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
