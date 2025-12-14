#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54862;
long long int var_9 = -458329443772754568LL;
int zero = 0;
signed char var_12 = (signed char)17;
unsigned short var_13 = (unsigned short)12030;
long long int var_14 = -5415802986692528436LL;
long long int var_15 = -4231959747594020532LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
