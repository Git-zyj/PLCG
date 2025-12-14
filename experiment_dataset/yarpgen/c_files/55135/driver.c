#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 351466246U;
unsigned short var_1 = (unsigned short)59366;
unsigned char var_4 = (unsigned char)5;
unsigned short var_8 = (unsigned short)40963;
unsigned short var_9 = (unsigned short)56447;
int zero = 0;
long long int var_12 = -6964667566090684736LL;
signed char var_13 = (signed char)-124;
void init() {
}

void checksum() {
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
