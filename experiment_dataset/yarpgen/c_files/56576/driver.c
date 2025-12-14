#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -3538954548648718936LL;
int var_6 = -1063305073;
unsigned short var_9 = (unsigned short)40402;
int zero = 0;
signed char var_16 = (signed char)-103;
int var_17 = -368739209;
unsigned char var_18 = (unsigned char)155;
unsigned short var_19 = (unsigned short)17818;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
