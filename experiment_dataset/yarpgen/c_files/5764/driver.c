#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)20;
unsigned char var_6 = (unsigned char)46;
short var_11 = (short)4215;
_Bool var_13 = (_Bool)1;
unsigned long long int var_17 = 8586582928253867776ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)7137;
long long int var_20 = 700654878541272384LL;
unsigned char var_21 = (unsigned char)1;
void init() {
}

void checksum() {
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
