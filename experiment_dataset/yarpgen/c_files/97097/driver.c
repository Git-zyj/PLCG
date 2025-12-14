#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20620;
int var_1 = 2079039228;
unsigned char var_6 = (unsigned char)246;
int var_7 = 1975896700;
signed char var_11 = (signed char)-29;
int zero = 0;
long long int var_12 = -541608263916941483LL;
_Bool var_13 = (_Bool)1;
short var_14 = (short)29915;
unsigned long long int var_15 = 15430344951461790963ULL;
void init() {
}

void checksum() {
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
