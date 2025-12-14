#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7788161415388744426LL;
unsigned short var_1 = (unsigned short)15707;
unsigned short var_2 = (unsigned short)14132;
int var_4 = 1786496789;
unsigned int var_5 = 1823579582U;
signed char var_7 = (signed char)-47;
unsigned char var_9 = (unsigned char)211;
int zero = 0;
long long int var_11 = 3836509217795150834LL;
signed char var_12 = (signed char)-18;
long long int var_13 = -5593384951567301474LL;
void init() {
}

void checksum() {
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
