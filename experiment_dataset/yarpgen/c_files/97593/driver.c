#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 63721698;
unsigned int var_1 = 900016586U;
unsigned char var_2 = (unsigned char)198;
int var_3 = 1551946424;
int var_5 = -29640753;
unsigned int var_6 = 4132837402U;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_11 = 1236561060;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)58;
signed char var_14 = (signed char)-22;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
