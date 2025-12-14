#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 229554747961535040ULL;
unsigned int var_1 = 3740229029U;
short var_2 = (short)18946;
unsigned long long int var_6 = 9391961731880186581ULL;
int var_7 = -926182984;
int zero = 0;
short var_10 = (short)-28087;
unsigned char var_11 = (unsigned char)251;
int var_12 = 1020802422;
signed char var_13 = (signed char)-116;
unsigned short var_14 = (unsigned short)15649;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
