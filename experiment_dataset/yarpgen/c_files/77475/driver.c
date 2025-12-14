#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39472;
unsigned char var_9 = (unsigned char)217;
unsigned char var_10 = (unsigned char)98;
_Bool var_12 = (_Bool)1;
signed char var_15 = (signed char)82;
int zero = 0;
unsigned char var_16 = (unsigned char)26;
int var_17 = 2074863411;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
