#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-10021;
short var_7 = (short)322;
unsigned char var_9 = (unsigned char)105;
long long int var_10 = -5665569656640095196LL;
int zero = 0;
int var_12 = 113187315;
signed char var_13 = (signed char)-2;
unsigned short var_14 = (unsigned short)7253;
long long int var_15 = 8965788252375595222LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
