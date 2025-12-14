#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)18657;
unsigned long long int var_10 = 12643544341010573600ULL;
unsigned long long int var_15 = 8553661589446891606ULL;
int zero = 0;
short var_18 = (short)-98;
unsigned char var_19 = (unsigned char)82;
int var_20 = 1865153131;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
