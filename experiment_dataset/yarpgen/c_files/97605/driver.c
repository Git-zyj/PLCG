#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)169;
long long int var_3 = 685425176784361056LL;
unsigned int var_6 = 4052489551U;
int var_8 = -909131335;
unsigned long long int var_11 = 9959728748309997319ULL;
int zero = 0;
signed char var_14 = (signed char)-57;
unsigned short var_15 = (unsigned short)27977;
long long int var_16 = -1124816018043713386LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
