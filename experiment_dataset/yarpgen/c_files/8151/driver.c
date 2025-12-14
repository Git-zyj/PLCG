#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)3419;
unsigned char var_6 = (unsigned char)156;
long long int var_10 = 518400892119155520LL;
int zero = 0;
long long int var_12 = 7599213187035904605LL;
int var_13 = 644630023;
long long int var_14 = -2413248415149291563LL;
int var_15 = -509055510;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
