#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 934882576787018667LL;
unsigned char var_4 = (unsigned char)219;
_Bool var_6 = (_Bool)1;
int var_9 = -1333880689;
unsigned int var_12 = 1065856175U;
int zero = 0;
unsigned char var_19 = (unsigned char)40;
unsigned long long int var_20 = 12765151141635882480ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
