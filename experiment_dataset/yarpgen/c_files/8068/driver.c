#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 388575092971854043LL;
unsigned short var_1 = (unsigned short)51320;
unsigned char var_2 = (unsigned char)204;
unsigned short var_3 = (unsigned short)60214;
signed char var_7 = (signed char)13;
unsigned int var_8 = 362451594U;
unsigned short var_10 = (unsigned short)58914;
signed char var_11 = (signed char)43;
int zero = 0;
signed char var_12 = (signed char)-49;
unsigned long long int var_13 = 15911967918439739175ULL;
unsigned long long int var_14 = 15751569042024658640ULL;
short var_15 = (short)31207;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
