#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2473381095834239813LL;
unsigned int var_4 = 2594538460U;
long long int var_6 = 556299314900026438LL;
unsigned int var_8 = 4097661519U;
int zero = 0;
unsigned short var_11 = (unsigned short)52609;
unsigned int var_12 = 1569415912U;
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
