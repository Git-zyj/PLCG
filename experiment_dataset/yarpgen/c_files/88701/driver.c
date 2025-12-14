#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)1508;
unsigned char var_9 = (unsigned char)156;
unsigned char var_10 = (unsigned char)54;
long long int var_11 = 7802988826473445009LL;
unsigned int var_13 = 4107087535U;
unsigned char var_18 = (unsigned char)94;
unsigned char var_19 = (unsigned char)19;
int zero = 0;
unsigned char var_20 = (unsigned char)238;
int var_21 = -1235543504;
unsigned short var_22 = (unsigned short)23171;
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
