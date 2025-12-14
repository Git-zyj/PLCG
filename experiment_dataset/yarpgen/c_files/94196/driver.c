#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-52;
unsigned char var_3 = (unsigned char)249;
long long int var_8 = 3352989105668594295LL;
unsigned long long int var_12 = 8013423833439543154ULL;
unsigned short var_14 = (unsigned short)15136;
int zero = 0;
unsigned short var_16 = (unsigned short)57106;
signed char var_17 = (signed char)-126;
void init() {
}

void checksum() {
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
