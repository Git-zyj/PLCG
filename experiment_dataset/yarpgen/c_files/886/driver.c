#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59247;
long long int var_1 = 8510717857055661193LL;
signed char var_2 = (signed char)-38;
unsigned long long int var_3 = 6455637711156099117ULL;
int var_4 = -760814458;
unsigned char var_5 = (unsigned char)65;
unsigned short var_6 = (unsigned short)27838;
int var_10 = 1326163647;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)169;
long long int var_13 = 7330919785190735582LL;
unsigned short var_14 = (unsigned short)6014;
unsigned int var_15 = 3357276059U;
int var_16 = -1436547692;
unsigned short var_17 = (unsigned short)45484;
int zero = 0;
unsigned char var_18 = (unsigned char)105;
unsigned long long int var_19 = 2615948590434327821ULL;
unsigned short var_20 = (unsigned short)1729;
unsigned int var_21 = 635942888U;
unsigned int var_22 = 406573764U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
