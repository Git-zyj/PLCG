#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)316;
long long int var_8 = 3150212199455156443LL;
unsigned long long int var_10 = 15187020765566181717ULL;
signed char var_12 = (signed char)-36;
unsigned char var_16 = (unsigned char)75;
signed char var_18 = (signed char)-123;
int zero = 0;
long long int var_20 = 6417813112091152519LL;
unsigned long long int var_21 = 9034019655889797271ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
