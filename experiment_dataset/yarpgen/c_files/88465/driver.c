#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)101;
signed char var_3 = (signed char)-52;
long long int var_5 = -5337495343978769018LL;
long long int var_8 = -4850288251629464465LL;
short var_12 = (short)-15155;
int zero = 0;
short var_13 = (short)19384;
signed char var_14 = (signed char)42;
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
