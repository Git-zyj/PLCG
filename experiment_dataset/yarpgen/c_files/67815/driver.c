#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-11204;
signed char var_5 = (signed char)97;
short var_6 = (short)-3422;
_Bool var_7 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)6;
unsigned char var_11 = (unsigned char)228;
int var_12 = 1365122159;
long long int var_13 = 8477584843065801257LL;
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
