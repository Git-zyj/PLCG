#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)170;
int var_6 = 1628267971;
_Bool var_8 = (_Bool)0;
long long int var_14 = 846520725373825998LL;
short var_15 = (short)4184;
int var_17 = -2093570299;
int zero = 0;
unsigned char var_18 = (unsigned char)117;
signed char var_19 = (signed char)-29;
signed char var_20 = (signed char)-34;
long long int var_21 = 8595355173465479097LL;
unsigned char var_22 = (unsigned char)171;
unsigned char var_23 = (unsigned char)167;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
