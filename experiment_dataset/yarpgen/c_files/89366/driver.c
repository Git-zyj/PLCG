#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44455;
unsigned char var_8 = (unsigned char)27;
unsigned char var_10 = (unsigned char)50;
_Bool var_16 = (_Bool)0;
unsigned char var_19 = (unsigned char)175;
int zero = 0;
unsigned long long int var_20 = 12390615087870417750ULL;
int var_21 = -314567126;
long long int var_22 = 2675297049830846725LL;
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
