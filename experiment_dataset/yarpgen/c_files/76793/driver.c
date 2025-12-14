#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-50;
signed char var_5 = (signed char)-50;
signed char var_6 = (signed char)69;
int zero = 0;
short var_17 = (short)4918;
unsigned long long int var_18 = 14972613825467412781ULL;
short var_19 = (short)-25505;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
