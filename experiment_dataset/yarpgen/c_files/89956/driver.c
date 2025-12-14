#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)16127;
signed char var_5 = (signed char)120;
signed char var_6 = (signed char)-57;
unsigned short var_12 = (unsigned short)36808;
unsigned long long int var_13 = 4042409938007207780ULL;
short var_17 = (short)-12898;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)42;
signed char var_20 = (signed char)-3;
unsigned short var_21 = (unsigned short)32344;
void init() {
}

void checksum() {
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
