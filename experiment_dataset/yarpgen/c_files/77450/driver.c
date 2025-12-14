#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2821486406U;
long long int var_3 = 4047135138998101611LL;
long long int var_4 = 3301687513248751577LL;
unsigned int var_5 = 2178909047U;
int var_6 = -152232479;
unsigned long long int var_8 = 14128293390915240140ULL;
int var_11 = 178050092;
unsigned short var_12 = (unsigned short)6551;
int var_13 = 1799854454;
unsigned int var_14 = 196946775U;
int zero = 0;
unsigned short var_15 = (unsigned short)6541;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
