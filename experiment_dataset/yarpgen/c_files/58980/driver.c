#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2429028123U;
unsigned short var_4 = (unsigned short)42199;
unsigned short var_5 = (unsigned short)19038;
unsigned long long int var_9 = 4466062092650823697ULL;
unsigned int var_10 = 3562760082U;
unsigned int var_13 = 2561857748U;
int zero = 0;
int var_19 = -1922804439;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
