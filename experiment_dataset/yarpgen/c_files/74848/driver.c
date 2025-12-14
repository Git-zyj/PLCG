#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)251;
unsigned short var_9 = (unsigned short)58537;
int var_11 = -1503990150;
int var_15 = -741476521;
int zero = 0;
signed char var_18 = (signed char)56;
short var_19 = (short)-1061;
long long int var_20 = 4345016191817019182LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
