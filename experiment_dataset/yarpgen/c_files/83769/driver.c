#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)17;
int var_3 = 2128811053;
long long int var_5 = -1835775074537804294LL;
unsigned int var_6 = 957681705U;
int var_7 = -630489915;
signed char var_9 = (signed char)-12;
unsigned long long int var_10 = 12593996038176721373ULL;
_Bool var_11 = (_Bool)0;
unsigned char var_13 = (unsigned char)108;
short var_17 = (short)14991;
int zero = 0;
unsigned int var_18 = 1751907566U;
int var_19 = 1135130308;
unsigned char var_20 = (unsigned char)254;
unsigned char var_21 = (unsigned char)66;
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
