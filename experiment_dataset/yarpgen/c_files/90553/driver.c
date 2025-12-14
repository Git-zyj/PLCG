#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)121;
unsigned long long int var_15 = 11969562604000268614ULL;
short var_16 = (short)-28477;
short var_17 = (short)-12496;
int zero = 0;
signed char var_18 = (signed char)14;
unsigned long long int var_19 = 5762547572432554040ULL;
unsigned short var_20 = (unsigned short)1368;
unsigned long long int var_21 = 248413560395620602ULL;
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
