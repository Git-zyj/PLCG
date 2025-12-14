#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -976875725;
short var_2 = (short)2367;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)49753;
unsigned short var_9 = (unsigned short)65330;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)208;
int zero = 0;
unsigned short var_12 = (unsigned short)36787;
long long int var_13 = -2874804701377193090LL;
unsigned char var_14 = (unsigned char)207;
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
