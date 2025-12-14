#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)18724;
unsigned char var_3 = (unsigned char)204;
_Bool var_5 = (_Bool)0;
signed char var_9 = (signed char)-47;
int zero = 0;
unsigned short var_10 = (unsigned short)18454;
unsigned char var_11 = (unsigned char)72;
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
