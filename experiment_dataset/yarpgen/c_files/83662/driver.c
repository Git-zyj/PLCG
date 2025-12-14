#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27917;
unsigned short var_2 = (unsigned short)51307;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
int var_7 = -1023618812;
int var_9 = -1066373821;
unsigned short var_12 = (unsigned short)26777;
int zero = 0;
int var_14 = -289622222;
unsigned short var_15 = (unsigned short)7983;
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
