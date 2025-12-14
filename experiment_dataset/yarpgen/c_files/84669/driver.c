#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-37;
unsigned char var_2 = (unsigned char)4;
unsigned short var_4 = (unsigned short)14506;
signed char var_5 = (signed char)-115;
int zero = 0;
short var_12 = (short)-21781;
int var_13 = -1460450806;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 4360112020980563622ULL;
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
