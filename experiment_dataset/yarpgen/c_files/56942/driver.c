#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned char var_7 = (unsigned char)95;
short var_8 = (short)-2610;
unsigned long long int var_16 = 13838473260810909025ULL;
long long int var_17 = 649281294492817185LL;
int zero = 0;
unsigned char var_19 = (unsigned char)16;
long long int var_20 = -2197718109877751779LL;
unsigned char var_21 = (unsigned char)70;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
