#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3624821921U;
unsigned int var_8 = 606316797U;
unsigned int var_15 = 930276578U;
unsigned short var_18 = (unsigned short)32141;
int zero = 0;
signed char var_19 = (signed char)-21;
unsigned char var_20 = (unsigned char)187;
signed char var_21 = (signed char)29;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
