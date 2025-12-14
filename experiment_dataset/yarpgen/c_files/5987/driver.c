#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)16291;
unsigned int var_4 = 3869024912U;
int var_8 = -250795895;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_10 = -2062823608;
long long int var_11 = -3756952198116078140LL;
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
