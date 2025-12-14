#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1673646418;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 2000405248U;
unsigned short var_7 = (unsigned short)16334;
unsigned short var_9 = (unsigned short)19226;
unsigned int var_11 = 1266341462U;
int zero = 0;
unsigned long long int var_12 = 6112028725461266396ULL;
unsigned short var_13 = (unsigned short)18309;
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
