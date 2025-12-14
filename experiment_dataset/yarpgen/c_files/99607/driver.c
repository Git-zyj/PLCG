#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4551084695190496854LL;
signed char var_4 = (signed char)123;
unsigned short var_6 = (unsigned short)32354;
int var_8 = 1930655282;
int zero = 0;
long long int var_12 = 3043934597032747284LL;
unsigned short var_13 = (unsigned short)11759;
signed char var_14 = (signed char)-18;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
