#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19579;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)128;
_Bool var_4 = (_Bool)1;
unsigned char var_6 = (unsigned char)239;
int var_8 = 1185635415;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)81;
int zero = 0;
int var_13 = 1458992945;
unsigned char var_14 = (unsigned char)95;
signed char var_15 = (signed char)-109;
void init() {
}

void checksum() {
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
