#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4484049323270443206LL;
_Bool var_1 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 6426449669804054953ULL;
unsigned char var_9 = (unsigned char)22;
int var_11 = 589238914;
int zero = 0;
short var_13 = (short)-28646;
short var_14 = (short)-3220;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
