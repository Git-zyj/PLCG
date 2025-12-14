#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)22;
unsigned char var_4 = (unsigned char)1;
unsigned char var_7 = (unsigned char)62;
_Bool var_8 = (_Bool)0;
signed char var_12 = (signed char)-97;
int zero = 0;
unsigned char var_13 = (unsigned char)193;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-111;
long long int var_16 = -4683086765234416072LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
