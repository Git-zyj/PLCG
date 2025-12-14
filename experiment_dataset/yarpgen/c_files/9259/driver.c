#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12263544317365673793ULL;
int var_4 = 95780241;
unsigned short var_7 = (unsigned short)51361;
_Bool var_8 = (_Bool)1;
int var_9 = 1417365181;
signed char var_12 = (signed char)-93;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = 3204881541596654012LL;
unsigned short var_15 = (unsigned short)32073;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
