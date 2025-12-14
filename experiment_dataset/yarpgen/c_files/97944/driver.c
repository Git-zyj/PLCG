#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)1895;
unsigned short var_4 = (unsigned short)28455;
unsigned char var_5 = (unsigned char)43;
unsigned long long int var_12 = 3497768680985885596ULL;
unsigned long long int var_14 = 3799864170865456862ULL;
int zero = 0;
unsigned long long int var_18 = 18075549873953400606ULL;
unsigned char var_19 = (unsigned char)148;
int var_20 = 1359132724;
unsigned char var_21 = (unsigned char)216;
int var_22 = -1284631636;
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
