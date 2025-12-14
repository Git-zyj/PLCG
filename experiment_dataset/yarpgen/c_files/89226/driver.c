#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31658;
unsigned short var_1 = (unsigned short)37223;
_Bool var_2 = (_Bool)0;
int var_3 = 571409077;
unsigned short var_11 = (unsigned short)50038;
unsigned int var_12 = 1337228591U;
short var_13 = (short)-15156;
unsigned char var_14 = (unsigned char)50;
unsigned long long int var_15 = 17699758558854827200ULL;
unsigned int var_16 = 84381368U;
unsigned short var_18 = (unsigned short)36000;
int zero = 0;
unsigned short var_19 = (unsigned short)43660;
long long int var_20 = -1413089608702858788LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
