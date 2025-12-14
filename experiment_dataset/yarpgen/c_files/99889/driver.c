#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2274924981U;
unsigned long long int var_3 = 9553890274984487809ULL;
unsigned short var_4 = (unsigned short)64019;
unsigned char var_5 = (unsigned char)127;
unsigned short var_7 = (unsigned short)59042;
long long int var_9 = -3010346842614423384LL;
int zero = 0;
unsigned int var_10 = 1491694201U;
unsigned int var_11 = 60333933U;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
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
