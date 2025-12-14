#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 38059160U;
int var_1 = 122786285;
unsigned long long int var_3 = 204092119652854545ULL;
short var_10 = (short)15110;
unsigned char var_13 = (unsigned char)22;
int var_14 = -819114961;
int zero = 0;
int var_16 = -1624921907;
short var_17 = (short)-4906;
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
