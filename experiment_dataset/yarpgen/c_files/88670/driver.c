#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)189;
short var_3 = (short)-23559;
signed char var_4 = (signed char)68;
short var_5 = (short)-4955;
unsigned long long int var_6 = 14797820004532543055ULL;
int var_7 = -282143467;
short var_8 = (short)4519;
unsigned char var_9 = (unsigned char)94;
int var_17 = -2012761030;
unsigned short var_18 = (unsigned short)32032;
int zero = 0;
unsigned long long int var_20 = 411751749060185276ULL;
unsigned long long int var_21 = 13110399659183297373ULL;
int var_22 = -1805462995;
unsigned short var_23 = (unsigned short)31555;
void init() {
}

void checksum() {
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
