#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6665826803750569490LL;
unsigned int var_4 = 3158819931U;
unsigned char var_9 = (unsigned char)50;
unsigned short var_16 = (unsigned short)31152;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)118;
unsigned char var_22 = (unsigned char)169;
int var_23 = 2147020885;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
