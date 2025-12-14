#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39489;
_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)186;
signed char var_7 = (signed char)-63;
signed char var_12 = (signed char)-50;
short var_15 = (short)14201;
short var_16 = (short)-15801;
int zero = 0;
long long int var_18 = 3057593472468756249LL;
short var_19 = (short)16964;
int var_20 = -1208388985;
unsigned char var_21 = (unsigned char)183;
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
