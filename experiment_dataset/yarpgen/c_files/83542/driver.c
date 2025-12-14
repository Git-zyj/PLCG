#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34840;
long long int var_5 = -8600030490378182340LL;
short var_6 = (short)16459;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-7786;
unsigned char var_10 = (unsigned char)217;
unsigned int var_11 = 3914081208U;
long long int var_13 = 3406992145725686722LL;
unsigned int var_16 = 2694293596U;
signed char var_19 = (signed char)-30;
int zero = 0;
unsigned long long int var_20 = 18125357470808862019ULL;
short var_21 = (short)-30604;
long long int var_22 = -1933884801970686206LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
