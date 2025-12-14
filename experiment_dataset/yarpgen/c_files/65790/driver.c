#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1375532068177491044LL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 10306627571364953099ULL;
unsigned char var_11 = (unsigned char)241;
unsigned long long int var_14 = 11813653565997041571ULL;
unsigned int var_17 = 3568112099U;
int zero = 0;
int var_18 = 1218866293;
unsigned char var_19 = (unsigned char)190;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
