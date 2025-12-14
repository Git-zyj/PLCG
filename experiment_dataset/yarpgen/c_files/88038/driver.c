#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18354952609917775390ULL;
unsigned int var_3 = 2941449647U;
unsigned long long int var_4 = 7640648389261154285ULL;
long long int var_10 = 5118641824134155575LL;
signed char var_13 = (signed char)-10;
int zero = 0;
short var_18 = (short)21074;
long long int var_19 = 3144308858279158278LL;
short var_20 = (short)22431;
short var_21 = (short)-16799;
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
