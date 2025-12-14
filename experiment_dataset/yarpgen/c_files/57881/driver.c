#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9725995621054506891ULL;
unsigned short var_9 = (unsigned short)63483;
long long int var_13 = 6410273010918743959LL;
int zero = 0;
unsigned int var_15 = 1344819912U;
unsigned int var_16 = 3766837464U;
unsigned long long int var_17 = 16877540880982833867ULL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
