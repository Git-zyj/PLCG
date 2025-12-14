#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6314;
unsigned int var_1 = 3418778919U;
unsigned long long int var_2 = 18352412731964628948ULL;
int var_3 = -914473470;
unsigned long long int var_4 = 4424471468083570580ULL;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)220;
unsigned int var_9 = 3603766664U;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)19300;
unsigned short var_12 = (unsigned short)15454;
unsigned char var_13 = (unsigned char)132;
unsigned char var_14 = (unsigned char)154;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
