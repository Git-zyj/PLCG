#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2838944212425311792LL;
unsigned long long int var_3 = 18427237846458860160ULL;
unsigned char var_6 = (unsigned char)79;
unsigned int var_11 = 3518401629U;
unsigned short var_12 = (unsigned short)15524;
int zero = 0;
long long int var_13 = -2739862846900769224LL;
signed char var_14 = (signed char)-124;
void init() {
}

void checksum() {
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
