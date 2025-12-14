#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3579334036056925915LL;
unsigned long long int var_2 = 12390872912500107397ULL;
unsigned short var_4 = (unsigned short)49455;
unsigned long long int var_6 = 15808159545683890097ULL;
_Bool var_8 = (_Bool)0;
short var_9 = (short)16890;
int zero = 0;
unsigned long long int var_10 = 13741540446864835524ULL;
unsigned long long int var_11 = 7261885239386614206ULL;
signed char var_12 = (signed char)124;
signed char var_13 = (signed char)110;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
