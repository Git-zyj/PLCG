#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 607972994098353032LL;
unsigned char var_7 = (unsigned char)69;
unsigned short var_8 = (unsigned short)52940;
int zero = 0;
short var_12 = (short)1964;
unsigned long long int var_13 = 26505586364115947ULL;
unsigned short var_14 = (unsigned short)1996;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
