#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2049922414937915961LL;
unsigned short var_1 = (unsigned short)57076;
_Bool var_2 = (_Bool)0;
unsigned int var_6 = 984959882U;
unsigned char var_8 = (unsigned char)250;
short var_9 = (short)-23368;
signed char var_11 = (signed char)-32;
long long int var_14 = -8865251959425258750LL;
unsigned int var_17 = 1203196700U;
int zero = 0;
unsigned int var_18 = 3311820301U;
signed char var_19 = (signed char)76;
unsigned char var_20 = (unsigned char)255;
long long int var_21 = 4901567464957633941LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
