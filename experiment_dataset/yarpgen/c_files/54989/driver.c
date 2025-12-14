#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -571493218362515739LL;
short var_6 = (short)1348;
short var_7 = (short)23837;
unsigned int var_9 = 502813038U;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-3268;
unsigned short var_16 = (unsigned short)15388;
void init() {
}

void checksum() {
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
