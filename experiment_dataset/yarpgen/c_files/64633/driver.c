#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-1;
unsigned long long int var_4 = 16056676448326689575ULL;
signed char var_11 = (signed char)-53;
int zero = 0;
unsigned int var_14 = 3129685899U;
long long int var_15 = 1544932614358291313LL;
unsigned char var_16 = (unsigned char)208;
unsigned char var_17 = (unsigned char)123;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
