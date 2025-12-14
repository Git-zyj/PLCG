#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 1963774020U;
unsigned short var_3 = (unsigned short)27696;
unsigned int var_4 = 3661960443U;
unsigned char var_9 = (unsigned char)78;
int zero = 0;
long long int var_10 = -3671791997420608680LL;
long long int var_11 = -6039361997641970261LL;
unsigned short var_12 = (unsigned short)17764;
signed char var_13 = (signed char)16;
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
