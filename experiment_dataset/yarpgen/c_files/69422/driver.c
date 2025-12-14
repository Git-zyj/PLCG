#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31800;
unsigned short var_2 = (unsigned short)779;
short var_5 = (short)-26832;
_Bool var_11 = (_Bool)0;
unsigned short var_13 = (unsigned short)32512;
unsigned short var_18 = (unsigned short)64795;
int zero = 0;
short var_20 = (short)-27545;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)43819;
unsigned short var_23 = (unsigned short)38071;
void init() {
}

void checksum() {
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
