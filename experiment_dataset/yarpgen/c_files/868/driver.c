#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5314610201078543277LL;
unsigned short var_4 = (unsigned short)10167;
signed char var_8 = (signed char)61;
unsigned short var_10 = (unsigned short)52852;
int var_15 = -2015385787;
unsigned short var_18 = (unsigned short)38887;
int zero = 0;
unsigned char var_20 = (unsigned char)46;
long long int var_21 = 532469430022271227LL;
short var_22 = (short)-29253;
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
