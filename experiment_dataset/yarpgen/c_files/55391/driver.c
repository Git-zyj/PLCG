#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-56;
unsigned char var_8 = (unsigned char)103;
signed char var_9 = (signed char)-58;
unsigned char var_15 = (unsigned char)139;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)200;
int zero = 0;
long long int var_20 = 2118233199898197811LL;
short var_21 = (short)10854;
unsigned short var_22 = (unsigned short)28495;
void init() {
}

void checksum() {
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
