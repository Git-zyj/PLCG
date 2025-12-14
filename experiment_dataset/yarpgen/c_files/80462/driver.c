#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9365813579666225425ULL;
signed char var_2 = (signed char)100;
signed char var_6 = (signed char)84;
unsigned short var_7 = (unsigned short)20081;
unsigned long long int var_10 = 13494909645285701965ULL;
unsigned int var_11 = 388766384U;
unsigned short var_13 = (unsigned short)44506;
int zero = 0;
unsigned long long int var_19 = 18174491969807429929ULL;
unsigned char var_20 = (unsigned char)27;
unsigned long long int var_21 = 2367625320411618391ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
