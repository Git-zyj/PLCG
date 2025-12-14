#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 4688323240682321179LL;
signed char var_9 = (signed char)107;
short var_11 = (short)-28958;
unsigned char var_13 = (unsigned char)251;
int zero = 0;
int var_19 = -392219304;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2104322585U;
signed char var_22 = (signed char)78;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
