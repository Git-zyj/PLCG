#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-11;
unsigned short var_1 = (unsigned short)17196;
int var_7 = -1014920206;
int var_9 = -1275861416;
signed char var_10 = (signed char)-98;
int zero = 0;
unsigned char var_15 = (unsigned char)1;
unsigned int var_16 = 2154075399U;
long long int var_17 = 6190857388665106113LL;
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
