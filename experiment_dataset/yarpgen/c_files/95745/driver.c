#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1943351949;
long long int var_3 = 1213573710481079909LL;
unsigned short var_5 = (unsigned short)61788;
long long int var_13 = 8144959402908672912LL;
int zero = 0;
unsigned long long int var_20 = 2915094676060378987ULL;
unsigned long long int var_21 = 3838175056372689368ULL;
signed char var_22 = (signed char)-74;
void init() {
}

void checksum() {
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
