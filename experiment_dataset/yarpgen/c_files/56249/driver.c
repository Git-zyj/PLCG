#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = 78466629;
signed char var_5 = (signed char)52;
int var_6 = -1648051569;
short var_7 = (short)12515;
long long int var_8 = 5383909488442082420LL;
signed char var_11 = (signed char)-49;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)-26;
unsigned char var_20 = (unsigned char)36;
unsigned char var_21 = (unsigned char)188;
_Bool var_22 = (_Bool)1;
short var_23 = (short)-18756;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
