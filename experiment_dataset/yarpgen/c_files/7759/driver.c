#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)113;
int var_4 = 1321680143;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
signed char var_9 = (signed char)-29;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-19917;
long long int var_13 = 4183422981103624802LL;
unsigned char var_15 = (unsigned char)173;
unsigned char var_16 = (unsigned char)232;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)14555;
long long int var_21 = 7905792259790240221LL;
int var_22 = -666746576;
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
