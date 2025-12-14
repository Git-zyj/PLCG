#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8564301824266206072LL;
unsigned long long int var_1 = 5302830218922494498ULL;
unsigned char var_9 = (unsigned char)212;
unsigned long long int var_12 = 5362621932102249537ULL;
unsigned int var_14 = 248615305U;
long long int var_15 = -7090061644941508577LL;
int zero = 0;
unsigned short var_17 = (unsigned short)40012;
signed char var_18 = (signed char)38;
void init() {
}

void checksum() {
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
