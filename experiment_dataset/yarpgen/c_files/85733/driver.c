#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)84;
_Bool var_2 = (_Bool)1;
long long int var_3 = -7612316597024576022LL;
_Bool var_4 = (_Bool)0;
unsigned char var_8 = (unsigned char)67;
unsigned char var_9 = (unsigned char)241;
int zero = 0;
unsigned char var_12 = (unsigned char)91;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
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
