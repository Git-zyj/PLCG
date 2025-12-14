#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-21332;
unsigned short var_2 = (unsigned short)37223;
short var_4 = (short)1206;
unsigned long long int var_6 = 11403915115225673442ULL;
unsigned long long int var_8 = 17833978413982229598ULL;
unsigned short var_9 = (unsigned short)25477;
int zero = 0;
unsigned char var_10 = (unsigned char)135;
unsigned char var_11 = (unsigned char)8;
signed char var_12 = (signed char)69;
long long int var_13 = 8642311566857781263LL;
unsigned long long int var_14 = 4524905436471716493ULL;
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
