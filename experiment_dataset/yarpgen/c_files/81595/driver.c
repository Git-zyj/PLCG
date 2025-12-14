#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)24499;
signed char var_6 = (signed char)23;
unsigned short var_9 = (unsigned short)39730;
unsigned int var_10 = 2274346285U;
unsigned short var_11 = (unsigned short)27004;
int var_12 = -1160928610;
long long int var_14 = 4794466441877209019LL;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)44367;
int zero = 0;
int var_19 = 1922795848;
_Bool var_20 = (_Bool)0;
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
