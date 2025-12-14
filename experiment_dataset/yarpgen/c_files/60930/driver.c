#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4886984638734176225LL;
long long int var_3 = 8241993682014217307LL;
signed char var_5 = (signed char)-15;
signed char var_6 = (signed char)3;
int var_8 = -1919311453;
int var_9 = -1229120359;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = 2152717741209972610LL;
unsigned long long int var_12 = 9940383579283823988ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
