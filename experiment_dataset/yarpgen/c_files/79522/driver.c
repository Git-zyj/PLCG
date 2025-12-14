#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)28626;
unsigned char var_6 = (unsigned char)137;
long long int var_7 = 8291901966068649603LL;
unsigned int var_9 = 297716843U;
long long int var_12 = -4420908558152658314LL;
int zero = 0;
unsigned short var_14 = (unsigned short)39856;
signed char var_15 = (signed char)105;
signed char var_16 = (signed char)-33;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
