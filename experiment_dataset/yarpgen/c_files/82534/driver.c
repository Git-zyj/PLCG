#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2205960530756511473LL;
unsigned short var_3 = (unsigned short)50479;
short var_6 = (short)7695;
int var_9 = 449927515;
int zero = 0;
unsigned short var_10 = (unsigned short)21340;
long long int var_11 = -5228616032950014860LL;
unsigned short var_12 = (unsigned short)35432;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
