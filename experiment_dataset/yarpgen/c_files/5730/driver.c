#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)69;
signed char var_5 = (signed char)79;
signed char var_7 = (signed char)-39;
unsigned char var_8 = (unsigned char)135;
unsigned short var_9 = (unsigned short)37022;
int zero = 0;
unsigned short var_10 = (unsigned short)54949;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)39334;
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
