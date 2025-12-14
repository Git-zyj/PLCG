#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8816983131604706437LL;
short var_2 = (short)-11040;
unsigned short var_5 = (unsigned short)6908;
signed char var_11 = (signed char)-60;
int var_15 = -884636650;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned short var_17 = (unsigned short)16844;
int var_18 = 1409496433;
unsigned long long int var_19 = 7756841839378219658ULL;
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
