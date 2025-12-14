#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3493881135666233823ULL;
int var_4 = 2035573812;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 7040150937328240212ULL;
int zero = 0;
short var_13 = (short)-32439;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 8312966014792670396ULL;
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
