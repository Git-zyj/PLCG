#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2446028815018211436LL;
signed char var_6 = (signed char)50;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)149;
int zero = 0;
signed char var_15 = (signed char)9;
int var_16 = -1902261161;
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
