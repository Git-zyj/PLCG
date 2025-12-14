#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1787191078;
unsigned short var_3 = (unsigned short)15240;
unsigned short var_5 = (unsigned short)53403;
int var_7 = 415188402;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)-85;
unsigned short var_11 = (unsigned short)27842;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
