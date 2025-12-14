#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 786388382U;
unsigned char var_7 = (unsigned char)50;
long long int var_8 = -5111333515441086208LL;
unsigned int var_9 = 3858176633U;
int zero = 0;
unsigned long long int var_10 = 17633675964659393319ULL;
unsigned long long int var_11 = 13727751013835191567ULL;
unsigned int var_12 = 4206251312U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
