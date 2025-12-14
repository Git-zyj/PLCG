#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-10200;
long long int var_4 = 8705824070016080951LL;
unsigned int var_10 = 1885320595U;
unsigned int var_17 = 3197683803U;
unsigned int var_18 = 3369859119U;
int zero = 0;
signed char var_20 = (signed char)32;
int var_21 = -1633143220;
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
