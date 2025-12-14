#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 3902276752375748282LL;
int var_13 = 935221089;
int zero = 0;
unsigned char var_20 = (unsigned char)111;
int var_21 = 1984987083;
unsigned short var_22 = (unsigned short)17000;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)124;
int var_25 = 917206666;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
