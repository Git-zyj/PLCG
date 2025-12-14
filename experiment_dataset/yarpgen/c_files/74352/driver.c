#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)54178;
signed char var_3 = (signed char)-110;
signed char var_6 = (signed char)15;
int zero = 0;
short var_10 = (short)-19337;
short var_11 = (short)32352;
unsigned short var_12 = (unsigned short)60152;
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
