#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-15;
short var_2 = (short)22002;
unsigned long long int var_4 = 13715281327835965648ULL;
unsigned int var_6 = 1264593925U;
signed char var_8 = (signed char)74;
unsigned char var_11 = (unsigned char)34;
int zero = 0;
int var_12 = -1390821811;
unsigned char var_13 = (unsigned char)228;
int var_14 = 333384491;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
