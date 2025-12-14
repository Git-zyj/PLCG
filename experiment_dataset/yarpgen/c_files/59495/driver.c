#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)21115;
long long int var_3 = 5259307268177855576LL;
signed char var_5 = (signed char)-87;
long long int var_7 = 5599281420999167130LL;
short var_9 = (short)24706;
long long int var_11 = 8175680387787348454LL;
int zero = 0;
unsigned short var_12 = (unsigned short)38111;
unsigned char var_13 = (unsigned char)255;
short var_14 = (short)30016;
long long int var_15 = -4560267910896058832LL;
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
