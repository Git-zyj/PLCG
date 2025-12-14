#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6388178484109537727LL;
long long int var_2 = -554646560501155549LL;
unsigned short var_4 = (unsigned short)2699;
signed char var_8 = (signed char)-48;
int zero = 0;
unsigned long long int var_19 = 12596242533609683617ULL;
signed char var_20 = (signed char)122;
unsigned int var_21 = 1077483808U;
int var_22 = 341425868;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
