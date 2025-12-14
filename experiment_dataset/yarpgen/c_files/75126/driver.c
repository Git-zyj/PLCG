#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15164900478055868287ULL;
signed char var_4 = (signed char)4;
unsigned int var_5 = 1272325918U;
int var_7 = 2027154413;
unsigned short var_8 = (unsigned short)54231;
int zero = 0;
signed char var_18 = (signed char)-77;
signed char var_19 = (signed char)-8;
signed char var_20 = (signed char)-74;
unsigned short var_21 = (unsigned short)53682;
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
