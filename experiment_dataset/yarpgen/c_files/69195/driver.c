#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47873;
unsigned char var_2 = (unsigned char)62;
unsigned long long int var_5 = 5262830253265329758ULL;
unsigned char var_8 = (unsigned char)83;
int zero = 0;
long long int var_10 = -9183601889605572835LL;
unsigned char var_11 = (unsigned char)19;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)197;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
