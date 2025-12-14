#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2050448572;
_Bool var_2 = (_Bool)0;
unsigned short var_4 = (unsigned short)65415;
unsigned int var_6 = 1938427639U;
short var_7 = (short)27984;
long long int var_8 = 6154717176622191303LL;
unsigned short var_10 = (unsigned short)24324;
long long int var_11 = 936945301188048088LL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)39762;
unsigned short var_14 = (unsigned short)53474;
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
