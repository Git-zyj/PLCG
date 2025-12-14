#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -290311816;
short var_5 = (short)-20944;
unsigned char var_7 = (unsigned char)244;
short var_10 = (short)-22612;
int zero = 0;
int var_18 = -272246134;
signed char var_19 = (signed char)48;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)117;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
