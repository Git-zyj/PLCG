#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27079;
int var_2 = 1031567111;
long long int var_5 = 7225704527050958636LL;
signed char var_8 = (signed char)-99;
int zero = 0;
unsigned short var_10 = (unsigned short)38367;
unsigned char var_11 = (unsigned char)156;
unsigned short var_12 = (unsigned short)18119;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
