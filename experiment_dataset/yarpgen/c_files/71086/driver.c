#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2775471585638224491LL;
signed char var_2 = (signed char)-108;
unsigned short var_3 = (unsigned short)60302;
long long int var_5 = -3003573201208656973LL;
unsigned char var_6 = (unsigned char)244;
unsigned char var_7 = (unsigned char)94;
unsigned long long int var_8 = 5435996236070835819ULL;
unsigned char var_9 = (unsigned char)136;
unsigned short var_10 = (unsigned short)63718;
int zero = 0;
int var_11 = 751782583;
int var_12 = 1006504826;
short var_13 = (short)-21055;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
