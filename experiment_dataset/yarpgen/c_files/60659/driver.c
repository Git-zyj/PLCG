#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)5610;
unsigned long long int var_3 = 9349538898494753933ULL;
signed char var_6 = (signed char)13;
int var_8 = -521327455;
unsigned int var_10 = 2179990139U;
unsigned short var_11 = (unsigned short)58086;
int zero = 0;
int var_13 = -513624491;
unsigned char var_14 = (unsigned char)202;
signed char var_15 = (signed char)65;
unsigned long long int var_16 = 17185451474449804594ULL;
unsigned char var_17 = (unsigned char)225;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
