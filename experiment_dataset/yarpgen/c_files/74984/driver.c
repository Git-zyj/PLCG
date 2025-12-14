#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)1767;
signed char var_3 = (signed char)-69;
unsigned char var_11 = (unsigned char)153;
unsigned short var_12 = (unsigned short)38191;
int var_15 = -1009104946;
signed char var_19 = (signed char)-22;
int zero = 0;
unsigned long long int var_20 = 5321188330452597900ULL;
signed char var_21 = (signed char)-67;
long long int var_22 = -2935532324522847161LL;
signed char var_23 = (signed char)11;
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
