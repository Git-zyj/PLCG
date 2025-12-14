#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-21;
signed char var_1 = (signed char)112;
unsigned char var_2 = (unsigned char)60;
unsigned int var_3 = 986412905U;
long long int var_8 = -8688762069910982556LL;
unsigned char var_10 = (unsigned char)45;
unsigned long long int var_11 = 14803948086686639853ULL;
short var_14 = (short)-26616;
signed char var_16 = (signed char)-33;
signed char var_18 = (signed char)-35;
int zero = 0;
signed char var_20 = (signed char)-113;
unsigned char var_21 = (unsigned char)106;
unsigned long long int var_22 = 6526112927589113623ULL;
long long int var_23 = -6139593322646391078LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
