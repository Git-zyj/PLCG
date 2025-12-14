#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -585715433421385455LL;
unsigned short var_3 = (unsigned short)49241;
signed char var_6 = (signed char)-45;
long long int var_8 = -6005229081307517748LL;
int var_9 = 1474855923;
signed char var_10 = (signed char)93;
unsigned short var_12 = (unsigned short)32604;
signed char var_13 = (signed char)35;
int zero = 0;
long long int var_14 = -3589116620779488774LL;
unsigned char var_15 = (unsigned char)70;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
