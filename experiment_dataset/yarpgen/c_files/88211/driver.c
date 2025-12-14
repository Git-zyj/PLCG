#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4140749953971986094LL;
int var_6 = -1484212350;
long long int var_7 = 4257356388657748237LL;
int var_8 = 28941838;
unsigned int var_11 = 1650358725U;
int var_15 = -2012682822;
int zero = 0;
long long int var_19 = 5214837810311534682LL;
unsigned int var_20 = 1213644986U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
