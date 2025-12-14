#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3220994878021399595LL;
signed char var_5 = (signed char)59;
unsigned long long int var_6 = 6762438610301136537ULL;
unsigned short var_8 = (unsigned short)4666;
short var_11 = (short)-2304;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = -4886814379314826843LL;
int var_14 = 1736691858;
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
