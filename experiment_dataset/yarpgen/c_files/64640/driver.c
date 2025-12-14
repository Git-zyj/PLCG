#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4806403199886488457LL;
signed char var_11 = (signed char)-41;
unsigned short var_12 = (unsigned short)52353;
int zero = 0;
long long int var_16 = 5748399161366088226LL;
unsigned char var_17 = (unsigned char)28;
int var_18 = 969560687;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
