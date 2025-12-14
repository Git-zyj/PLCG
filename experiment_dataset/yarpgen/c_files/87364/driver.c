#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2754307240553663610LL;
unsigned short var_9 = (unsigned short)4875;
unsigned short var_13 = (unsigned short)1912;
int zero = 0;
unsigned char var_19 = (unsigned char)239;
unsigned char var_20 = (unsigned char)145;
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
