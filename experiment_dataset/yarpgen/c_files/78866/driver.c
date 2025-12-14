#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39493;
int var_1 = -1133534087;
unsigned int var_2 = 1638070262U;
int var_3 = 1672292699;
int var_8 = -846759022;
signed char var_11 = (signed char)80;
int zero = 0;
signed char var_12 = (signed char)-17;
unsigned short var_13 = (unsigned short)65250;
long long int var_14 = 5088949034893802757LL;
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
