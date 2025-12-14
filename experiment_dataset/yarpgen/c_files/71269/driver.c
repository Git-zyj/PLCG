#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6054360971948777353LL;
int var_1 = -1035505712;
unsigned short var_6 = (unsigned short)3387;
unsigned long long int var_9 = 732861180791447021ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)84;
int var_12 = 1375957530;
int var_13 = 1313132153;
unsigned short var_14 = (unsigned short)54059;
unsigned short var_15 = (unsigned short)53653;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
