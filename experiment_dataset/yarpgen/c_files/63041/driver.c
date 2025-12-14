#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11527606013656305636ULL;
unsigned char var_2 = (unsigned char)148;
unsigned long long int var_3 = 10300205810952474275ULL;
signed char var_4 = (signed char)104;
unsigned short var_5 = (unsigned short)44575;
unsigned long long int var_7 = 3294142745206514958ULL;
unsigned long long int var_8 = 5155322846713100102ULL;
unsigned short var_9 = (unsigned short)1621;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)94;
signed char var_12 = (signed char)-115;
signed char var_13 = (signed char)72;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
