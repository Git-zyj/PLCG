#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)50585;
unsigned char var_4 = (unsigned char)135;
signed char var_9 = (signed char)-46;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)75;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)57;
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
