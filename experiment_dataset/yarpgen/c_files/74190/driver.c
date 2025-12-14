#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12014974724339762753ULL;
int var_1 = -591240601;
signed char var_2 = (signed char)12;
int var_4 = 1183956245;
unsigned long long int var_6 = 14739126222437334139ULL;
unsigned int var_7 = 3346404438U;
signed char var_9 = (signed char)25;
int zero = 0;
unsigned char var_10 = (unsigned char)163;
short var_11 = (short)-3244;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
