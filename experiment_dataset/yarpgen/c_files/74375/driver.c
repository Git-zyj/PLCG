#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)115;
unsigned int var_2 = 1217993348U;
_Bool var_3 = (_Bool)1;
unsigned char var_6 = (unsigned char)241;
unsigned long long int var_7 = 3200010695641386547ULL;
int var_8 = -1771122900;
signed char var_9 = (signed char)-60;
int var_10 = 416624211;
int var_11 = -2125800517;
long long int var_13 = -8326945786758892077LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)31858;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
