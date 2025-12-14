#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25281;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 5056110148510700084ULL;
unsigned char var_4 = (unsigned char)123;
unsigned char var_5 = (unsigned char)73;
unsigned long long int var_6 = 10566085677705622235ULL;
long long int var_9 = 6242314857340470330LL;
unsigned int var_10 = 1415636998U;
signed char var_11 = (signed char)117;
int zero = 0;
int var_12 = 1658679541;
signed char var_13 = (signed char)-101;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
