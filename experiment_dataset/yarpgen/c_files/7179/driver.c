#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)9199;
unsigned short var_5 = (unsigned short)57299;
unsigned char var_10 = (unsigned char)250;
int zero = 0;
long long int var_15 = 1433454993478439944LL;
int var_16 = -1968968789;
unsigned long long int var_17 = 2722236829671995986ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
