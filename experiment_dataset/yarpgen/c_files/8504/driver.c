#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)45654;
unsigned char var_4 = (unsigned char)107;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)189;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_15 = 1143320483;
long long int var_16 = -4998261999178622861LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
