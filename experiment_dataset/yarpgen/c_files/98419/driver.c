#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)63;
signed char var_3 = (signed char)119;
int var_6 = 1044359334;
unsigned char var_13 = (unsigned char)175;
int zero = 0;
signed char var_18 = (signed char)-45;
long long int var_19 = -1423721937497187197LL;
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
