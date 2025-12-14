#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4699696926807261277LL;
int var_2 = 264211738;
long long int var_8 = -8875429922013931923LL;
long long int var_9 = -3484113392023475617LL;
signed char var_10 = (signed char)92;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-125;
unsigned char var_14 = (unsigned char)156;
unsigned short var_15 = (unsigned short)41479;
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
