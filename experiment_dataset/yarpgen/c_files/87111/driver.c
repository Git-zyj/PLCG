#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7896236216707761204LL;
unsigned short var_3 = (unsigned short)59823;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)127;
unsigned char var_8 = (unsigned char)204;
int zero = 0;
signed char var_11 = (signed char)-120;
unsigned short var_12 = (unsigned short)26257;
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
