#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 363872723U;
signed char var_6 = (signed char)-85;
unsigned int var_7 = 4059481814U;
unsigned int var_8 = 453317149U;
int var_10 = 1071047224;
unsigned int var_14 = 2332525676U;
int zero = 0;
signed char var_16 = (signed char)15;
unsigned char var_17 = (unsigned char)136;
unsigned short var_18 = (unsigned short)20308;
unsigned int var_19 = 1706211129U;
short var_20 = (short)-12218;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
