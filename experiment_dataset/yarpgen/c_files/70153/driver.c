#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1379293402U;
unsigned int var_2 = 1985804191U;
long long int var_5 = -5555806145630378531LL;
int var_9 = -1918981965;
unsigned long long int var_11 = 11064766841098543132ULL;
short var_15 = (short)6944;
int zero = 0;
unsigned short var_16 = (unsigned short)55620;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)52350;
void init() {
}

void checksum() {
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
