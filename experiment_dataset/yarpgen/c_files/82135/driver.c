#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41374;
long long int var_5 = -6985267428791499075LL;
short var_6 = (short)3614;
short var_7 = (short)-3445;
unsigned char var_9 = (unsigned char)15;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)61;
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
