#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11865208196797637214ULL;
long long int var_2 = 8277165797509691739LL;
long long int var_6 = -3408648151577354056LL;
unsigned long long int var_9 = 723807164386844311ULL;
unsigned char var_15 = (unsigned char)234;
long long int var_16 = 6925359284348462775LL;
int zero = 0;
int var_20 = 1082419193;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
