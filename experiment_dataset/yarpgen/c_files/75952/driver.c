#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-74;
signed char var_2 = (signed char)-92;
unsigned short var_3 = (unsigned short)27582;
unsigned short var_4 = (unsigned short)35654;
signed char var_5 = (signed char)76;
unsigned short var_6 = (unsigned short)28859;
unsigned char var_8 = (unsigned char)172;
unsigned short var_9 = (unsigned short)43873;
int zero = 0;
unsigned int var_10 = 1553692922U;
signed char var_11 = (signed char)69;
unsigned short var_12 = (unsigned short)5653;
unsigned int var_13 = 2048186036U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
