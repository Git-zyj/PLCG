#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -7230686590862356531LL;
short var_6 = (short)-16488;
unsigned long long int var_7 = 923975645922594318ULL;
int zero = 0;
signed char var_13 = (signed char)-113;
unsigned char var_14 = (unsigned char)27;
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
