#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)7;
signed char var_1 = (signed char)-21;
long long int var_4 = -9002414757571704249LL;
unsigned char var_9 = (unsigned char)197;
int zero = 0;
unsigned int var_10 = 1501263412U;
long long int var_11 = -5641645639035656929LL;
long long int var_12 = -95556229087394437LL;
unsigned char var_13 = (unsigned char)170;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
