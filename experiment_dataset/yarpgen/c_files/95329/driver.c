#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10914542686788868667ULL;
short var_4 = (short)12548;
signed char var_7 = (signed char)29;
int zero = 0;
short var_11 = (short)22022;
signed char var_12 = (signed char)-107;
signed char var_13 = (signed char)-48;
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
