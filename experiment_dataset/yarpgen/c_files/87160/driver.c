#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)248;
unsigned short var_5 = (unsigned short)20143;
short var_7 = (short)20632;
signed char var_9 = (signed char)-83;
long long int var_10 = 3956947329652674342LL;
int zero = 0;
unsigned long long int var_11 = 167265243595432229ULL;
short var_12 = (short)1479;
unsigned short var_13 = (unsigned short)37356;
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
