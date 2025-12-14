#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 15351449081235461887ULL;
unsigned long long int var_9 = 14387642352380999318ULL;
int zero = 0;
unsigned long long int var_11 = 3759041406847485079ULL;
unsigned short var_12 = (unsigned short)31087;
void init() {
}

void checksum() {
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
