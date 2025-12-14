#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6160621165030572890LL;
unsigned short var_1 = (unsigned short)6283;
unsigned char var_4 = (unsigned char)83;
long long int var_7 = -960426286808955852LL;
unsigned short var_8 = (unsigned short)54756;
unsigned long long int var_12 = 15515770752940055310ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)132;
signed char var_14 = (signed char)55;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
