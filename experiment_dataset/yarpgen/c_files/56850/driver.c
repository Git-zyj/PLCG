#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-46;
signed char var_2 = (signed char)-117;
short var_3 = (short)-28050;
unsigned char var_4 = (unsigned char)80;
unsigned int var_5 = 2402208488U;
signed char var_6 = (signed char)-39;
unsigned char var_8 = (unsigned char)34;
unsigned long long int var_13 = 12883846259973908060ULL;
unsigned long long int var_15 = 8337972494476703904ULL;
int zero = 0;
signed char var_16 = (signed char)-10;
long long int var_17 = -1701655574981200600LL;
unsigned long long int var_18 = 12243778270768500898ULL;
int var_19 = 131061173;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
