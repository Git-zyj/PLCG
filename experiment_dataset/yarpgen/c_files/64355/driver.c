#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13062437324676199318ULL;
unsigned short var_1 = (unsigned short)25168;
unsigned short var_4 = (unsigned short)29564;
int var_13 = 1994809938;
unsigned int var_14 = 92207729U;
signed char var_16 = (signed char)-72;
int zero = 0;
unsigned short var_20 = (unsigned short)9842;
signed char var_21 = (signed char)-37;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
