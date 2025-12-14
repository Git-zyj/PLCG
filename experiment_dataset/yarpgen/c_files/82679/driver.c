#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)28;
signed char var_3 = (signed char)32;
unsigned short var_17 = (unsigned short)7076;
int var_18 = -1556248472;
int zero = 0;
unsigned int var_20 = 3182257197U;
unsigned short var_21 = (unsigned short)59926;
long long int var_22 = 867652780221239143LL;
long long int var_23 = -7907915132537403110LL;
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
