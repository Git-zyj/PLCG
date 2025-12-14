#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1971267348;
_Bool var_5 = (_Bool)1;
long long int var_9 = 3134517373011422593LL;
int zero = 0;
unsigned short var_17 = (unsigned short)32570;
unsigned char var_18 = (unsigned char)58;
int var_19 = -1154812416;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
