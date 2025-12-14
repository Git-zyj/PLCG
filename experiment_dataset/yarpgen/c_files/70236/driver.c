#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13025947318780039379ULL;
unsigned short var_1 = (unsigned short)4068;
unsigned long long int var_2 = 6179515570036345760ULL;
_Bool var_7 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)0;
long long int var_11 = 7026668908860402756LL;
unsigned short var_12 = (unsigned short)28768;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
