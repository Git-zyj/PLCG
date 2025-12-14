#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)1191;
signed char var_2 = (signed char)127;
unsigned char var_6 = (unsigned char)121;
long long int var_11 = 2563730057572655357LL;
unsigned short var_13 = (unsigned short)4247;
int var_16 = 1494942351;
int zero = 0;
long long int var_19 = 7019438755362084363LL;
unsigned long long int var_20 = 12823338891736682377ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
