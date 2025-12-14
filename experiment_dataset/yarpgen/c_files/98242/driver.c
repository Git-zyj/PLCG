#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 13031820741176217093ULL;
long long int var_8 = -7612741759755923273LL;
int var_9 = -534580390;
int zero = 0;
unsigned char var_11 = (unsigned char)58;
int var_12 = -850769448;
unsigned int var_13 = 3880634843U;
unsigned char var_14 = (unsigned char)12;
void init() {
}

void checksum() {
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
