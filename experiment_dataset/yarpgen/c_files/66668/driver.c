#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16438539902132406249ULL;
short var_2 = (short)10699;
unsigned int var_3 = 2661997676U;
unsigned char var_6 = (unsigned char)52;
unsigned int var_7 = 4012541810U;
_Bool var_8 = (_Bool)1;
long long int var_9 = 8411962175011125958LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = -1521928044;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
