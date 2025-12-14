#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59665;
unsigned short var_2 = (unsigned short)31015;
signed char var_5 = (signed char)-98;
unsigned char var_6 = (unsigned char)200;
int zero = 0;
unsigned long long int var_15 = 14954938471439713419ULL;
short var_16 = (short)31003;
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
