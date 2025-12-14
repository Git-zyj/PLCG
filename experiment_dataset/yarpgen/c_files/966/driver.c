#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)82;
unsigned int var_4 = 1079311449U;
unsigned char var_7 = (unsigned char)161;
_Bool var_8 = (_Bool)0;
long long int var_9 = 3465452457528787787LL;
unsigned int var_11 = 1768621377U;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = 2402351759097465173LL;
_Bool var_15 = (_Bool)0;
int var_16 = -415220324;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
