#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)29895;
int var_9 = -970881451;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)85;
long long int var_21 = -5621514415706805611LL;
unsigned char var_22 = (unsigned char)106;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
