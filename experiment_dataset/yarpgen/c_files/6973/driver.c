#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6220675123277585432LL;
unsigned char var_1 = (unsigned char)252;
unsigned char var_2 = (unsigned char)118;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)-43;
int zero = 0;
signed char var_10 = (signed char)-94;
unsigned short var_11 = (unsigned short)32311;
unsigned short var_12 = (unsigned short)60745;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
