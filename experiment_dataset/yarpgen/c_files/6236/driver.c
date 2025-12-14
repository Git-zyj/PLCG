#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1171894538;
unsigned short var_7 = (unsigned short)14684;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)129;
int zero = 0;
int var_20 = 541727376;
_Bool var_21 = (_Bool)1;
long long int var_22 = -7517681300761473773LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
