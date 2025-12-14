#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5544184981096628396ULL;
int var_3 = -39648010;
unsigned short var_9 = (unsigned short)30959;
long long int var_11 = -2804473341318642748LL;
int zero = 0;
unsigned int var_12 = 624953053U;
unsigned int var_13 = 706405637U;
signed char var_14 = (signed char)7;
long long int var_15 = 8994730026557420908LL;
unsigned long long int var_16 = 14658123613438831469ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
