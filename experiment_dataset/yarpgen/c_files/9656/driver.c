#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-31;
unsigned long long int var_2 = 2633289359643673526ULL;
long long int var_3 = 5583931288374706288LL;
unsigned long long int var_5 = 2763806243923273992ULL;
signed char var_7 = (signed char)4;
int zero = 0;
unsigned long long int var_11 = 12611517113144548052ULL;
unsigned short var_12 = (unsigned short)59929;
unsigned short var_13 = (unsigned short)41651;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
