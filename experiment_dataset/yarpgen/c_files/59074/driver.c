#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2069504705319269833LL;
long long int var_14 = -5321474898769772096LL;
unsigned char var_15 = (unsigned char)217;
signed char var_18 = (signed char)-125;
int zero = 0;
unsigned char var_19 = (unsigned char)56;
unsigned int var_20 = 2698733130U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
