#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-1527;
short var_3 = (short)-23407;
long long int var_4 = -9022679376466375273LL;
unsigned int var_5 = 3715822191U;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)805;
unsigned char var_9 = (unsigned char)14;
int zero = 0;
int var_10 = -580510536;
unsigned char var_11 = (unsigned char)109;
unsigned short var_12 = (unsigned short)36035;
unsigned char var_13 = (unsigned char)143;
short var_14 = (short)32086;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
