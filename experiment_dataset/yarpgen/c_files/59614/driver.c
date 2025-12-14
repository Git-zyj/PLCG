#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-2;
int var_2 = -516572932;
_Bool var_11 = (_Bool)0;
unsigned char var_16 = (unsigned char)193;
int zero = 0;
unsigned char var_18 = (unsigned char)243;
long long int var_19 = 1659759737410695895LL;
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
