#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15097682576164126913ULL;
short var_4 = (short)18533;
unsigned long long int var_6 = 397315392256414863ULL;
long long int var_8 = 2183281479711371246LL;
unsigned short var_10 = (unsigned short)14172;
signed char var_11 = (signed char)-125;
int var_13 = 2118583181;
long long int var_16 = -5225224601405425656LL;
unsigned short var_17 = (unsigned short)40004;
unsigned char var_19 = (unsigned char)134;
int zero = 0;
unsigned long long int var_20 = 11657080714144622392ULL;
int var_21 = 769698096;
void init() {
}

void checksum() {
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
