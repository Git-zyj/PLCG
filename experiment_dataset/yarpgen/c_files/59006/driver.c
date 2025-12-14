#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)101;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-21;
unsigned char var_5 = (unsigned char)229;
unsigned char var_6 = (unsigned char)200;
unsigned int var_7 = 3782516450U;
unsigned char var_8 = (unsigned char)23;
unsigned char var_10 = (unsigned char)195;
unsigned short var_11 = (unsigned short)30074;
unsigned long long int var_12 = 294334305386683420ULL;
int zero = 0;
int var_13 = -798997003;
unsigned long long int var_14 = 10816830554906464546ULL;
unsigned char var_15 = (unsigned char)106;
signed char var_16 = (signed char)68;
unsigned long long int var_17 = 3665368385406016177ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
