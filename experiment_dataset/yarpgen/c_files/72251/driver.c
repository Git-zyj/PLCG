#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1842096403;
short var_5 = (short)16918;
short var_6 = (short)-25549;
unsigned char var_7 = (unsigned char)31;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-29772;
unsigned long long int var_13 = 16504828169424665643ULL;
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
