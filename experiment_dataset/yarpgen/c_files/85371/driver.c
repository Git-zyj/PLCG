#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)4178;
int var_6 = -1518947866;
_Bool var_11 = (_Bool)0;
long long int var_13 = -3072191436852444808LL;
signed char var_16 = (signed char)-18;
int zero = 0;
int var_19 = -889244441;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-17998;
unsigned short var_22 = (unsigned short)26101;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
