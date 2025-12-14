#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-44;
_Bool var_4 = (_Bool)0;
int var_5 = 1888473339;
unsigned short var_6 = (unsigned short)8085;
short var_10 = (short)-64;
signed char var_14 = (signed char)-118;
short var_15 = (short)9184;
short var_16 = (short)13448;
int zero = 0;
unsigned long long int var_18 = 8148998004457757526ULL;
signed char var_19 = (signed char)-48;
unsigned short var_20 = (unsigned short)51301;
unsigned long long int var_21 = 4380512792429657964ULL;
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
