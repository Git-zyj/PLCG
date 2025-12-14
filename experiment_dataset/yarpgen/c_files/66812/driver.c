#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)27;
unsigned short var_6 = (unsigned short)24082;
long long int var_8 = 6046796000175920490LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_12 = 5203600431034440715LL;
short var_13 = (short)-15523;
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
