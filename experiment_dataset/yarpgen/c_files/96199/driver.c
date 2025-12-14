#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-20296;
unsigned char var_2 = (unsigned char)90;
signed char var_3 = (signed char)75;
unsigned short var_4 = (unsigned short)7962;
signed char var_5 = (signed char)-8;
unsigned short var_6 = (unsigned short)57742;
long long int var_9 = -2550409435307749703LL;
unsigned int var_10 = 2583611847U;
unsigned long long int var_11 = 17558366211551945611ULL;
int zero = 0;
unsigned int var_12 = 2031470454U;
unsigned short var_13 = (unsigned short)50566;
unsigned char var_14 = (unsigned char)252;
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
