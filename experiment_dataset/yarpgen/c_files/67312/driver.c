#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6539;
_Bool var_1 = (_Bool)0;
unsigned int var_3 = 12188553U;
signed char var_4 = (signed char)-127;
unsigned short var_8 = (unsigned short)2402;
unsigned short var_10 = (unsigned short)29958;
int var_11 = -1590867773;
long long int var_12 = -6930831475520827539LL;
short var_13 = (short)-29267;
unsigned short var_18 = (unsigned short)52841;
int zero = 0;
unsigned char var_19 = (unsigned char)170;
unsigned char var_20 = (unsigned char)157;
int var_21 = -891872290;
unsigned char var_22 = (unsigned char)69;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
