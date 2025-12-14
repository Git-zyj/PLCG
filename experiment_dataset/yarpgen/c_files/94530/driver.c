#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14712;
unsigned short var_6 = (unsigned short)6280;
unsigned char var_9 = (unsigned char)110;
long long int var_10 = -902873962471785783LL;
unsigned short var_11 = (unsigned short)29631;
unsigned char var_12 = (unsigned char)193;
int var_13 = 952017081;
int zero = 0;
signed char var_14 = (signed char)31;
int var_15 = -1942795696;
void init() {
}

void checksum() {
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
