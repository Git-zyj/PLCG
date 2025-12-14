#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)51;
_Bool var_6 = (_Bool)1;
unsigned short var_16 = (unsigned short)29878;
unsigned short var_17 = (unsigned short)2717;
int zero = 0;
int var_19 = -1749562823;
unsigned short var_20 = (unsigned short)31106;
signed char var_21 = (signed char)84;
unsigned short var_22 = (unsigned short)46289;
_Bool var_23 = (_Bool)1;
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
