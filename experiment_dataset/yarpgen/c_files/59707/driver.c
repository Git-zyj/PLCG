#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8291;
long long int var_1 = 2836100926196567341LL;
short var_2 = (short)-10384;
short var_4 = (short)-29415;
short var_5 = (short)-19550;
unsigned long long int var_6 = 2037134003771191185ULL;
unsigned long long int var_8 = 5891775998120888313ULL;
unsigned int var_11 = 2167852800U;
int zero = 0;
unsigned char var_12 = (unsigned char)115;
short var_13 = (short)18067;
unsigned char var_14 = (unsigned char)1;
unsigned long long int var_15 = 9952412002124676865ULL;
unsigned short var_16 = (unsigned short)9124;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
