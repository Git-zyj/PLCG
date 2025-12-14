#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-122;
signed char var_1 = (signed char)6;
unsigned long long int var_2 = 1815358663091413523ULL;
unsigned long long int var_4 = 8845180354730901392ULL;
signed char var_5 = (signed char)46;
unsigned short var_6 = (unsigned short)6543;
unsigned short var_8 = (unsigned short)841;
unsigned long long int var_9 = 340770891960781917ULL;
int zero = 0;
unsigned long long int var_10 = 11452305692254476789ULL;
unsigned short var_11 = (unsigned short)8584;
unsigned long long int var_12 = 17825341650098299048ULL;
unsigned char var_13 = (unsigned char)172;
unsigned short var_14 = (unsigned short)15182;
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
