#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-10;
unsigned short var_4 = (unsigned short)41689;
long long int var_5 = -1113449974465985520LL;
_Bool var_6 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned char var_12 = (unsigned char)167;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 13778993103649761829ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
