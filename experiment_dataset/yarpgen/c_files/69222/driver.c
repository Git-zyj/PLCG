#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17972510542121812093ULL;
unsigned short var_1 = (unsigned short)13505;
short var_2 = (short)-4093;
signed char var_4 = (signed char)86;
unsigned short var_6 = (unsigned short)1756;
unsigned int var_9 = 3693835998U;
unsigned int var_10 = 3342209453U;
long long int var_11 = -3009081660734014752LL;
int zero = 0;
signed char var_12 = (signed char)-71;
long long int var_13 = 280306210601864914LL;
unsigned char var_14 = (unsigned char)88;
long long int var_15 = -5942808555374235727LL;
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
