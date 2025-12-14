#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7732716735232851871LL;
short var_2 = (short)-31617;
unsigned long long int var_4 = 7132503468854870574ULL;
signed char var_6 = (signed char)80;
int zero = 0;
unsigned long long int var_11 = 3293202837179951357ULL;
short var_12 = (short)-16925;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
