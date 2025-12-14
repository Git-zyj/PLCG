#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)31307;
int var_7 = 318529917;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 3909123135U;
_Bool var_14 = (_Bool)1;
signed char var_16 = (signed char)81;
int zero = 0;
unsigned short var_17 = (unsigned short)14055;
unsigned short var_18 = (unsigned short)52350;
_Bool var_19 = (_Bool)1;
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
