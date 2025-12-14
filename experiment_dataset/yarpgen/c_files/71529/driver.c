#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1929425068U;
unsigned int var_3 = 3075352402U;
signed char var_5 = (signed char)-80;
signed char var_6 = (signed char)81;
unsigned char var_8 = (unsigned char)93;
unsigned char var_11 = (unsigned char)184;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_17 = -6603837946092228254LL;
unsigned long long int var_18 = 7866495552460692348ULL;
short var_19 = (short)-7857;
void init() {
}

void checksum() {
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
