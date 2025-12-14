#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15000;
unsigned char var_2 = (unsigned char)92;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)21673;
signed char var_6 = (signed char)-84;
signed char var_11 = (signed char)34;
long long int var_14 = 2024867609527712008LL;
int zero = 0;
long long int var_17 = 307574891919339406LL;
long long int var_18 = 1843215635614329827LL;
_Bool var_19 = (_Bool)0;
long long int var_20 = 3918285449473697122LL;
void init() {
}

void checksum() {
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
