#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-17695;
unsigned int var_3 = 26903153U;
unsigned int var_5 = 3356283281U;
signed char var_6 = (signed char)-17;
unsigned short var_14 = (unsigned short)61062;
unsigned int var_18 = 3858654331U;
int zero = 0;
short var_20 = (short)-1244;
unsigned short var_21 = (unsigned short)20833;
unsigned short var_22 = (unsigned short)38268;
signed char var_23 = (signed char)-62;
long long int var_24 = 7280339913048822839LL;
unsigned char var_25 = (unsigned char)48;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
