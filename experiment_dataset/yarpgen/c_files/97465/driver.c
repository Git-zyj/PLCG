#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4564580588499671301ULL;
signed char var_3 = (signed char)-33;
unsigned short var_11 = (unsigned short)18841;
unsigned short var_12 = (unsigned short)21263;
int zero = 0;
signed char var_18 = (signed char)22;
int var_19 = -1261976966;
signed char var_20 = (signed char)54;
unsigned long long int var_21 = 4359082396638801074ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
