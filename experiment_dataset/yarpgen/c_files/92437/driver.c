#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)204;
short var_3 = (short)18672;
unsigned char var_5 = (unsigned char)137;
unsigned char var_6 = (unsigned char)130;
unsigned char var_7 = (unsigned char)133;
unsigned char var_8 = (unsigned char)158;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)40392;
long long int var_20 = 7834234387642037116LL;
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
