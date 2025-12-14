#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 526565224850782665ULL;
unsigned long long int var_4 = 12075104027097345861ULL;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)39334;
unsigned short var_9 = (unsigned short)62204;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_11 = (short)-4562;
signed char var_12 = (signed char)51;
void init() {
}

void checksum() {
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
