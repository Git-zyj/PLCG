#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17088706642728531716ULL;
unsigned char var_5 = (unsigned char)208;
signed char var_6 = (signed char)35;
unsigned char var_10 = (unsigned char)84;
int var_11 = 1534106037;
int zero = 0;
unsigned int var_19 = 1447013222U;
signed char var_20 = (signed char)-24;
unsigned long long int var_21 = 13765242884323105573ULL;
signed char var_22 = (signed char)74;
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
