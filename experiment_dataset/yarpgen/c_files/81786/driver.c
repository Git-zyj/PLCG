#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2616913236U;
unsigned short var_1 = (unsigned short)61308;
unsigned int var_7 = 1068946780U;
unsigned char var_9 = (unsigned char)82;
unsigned int var_11 = 1202589223U;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-10181;
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
