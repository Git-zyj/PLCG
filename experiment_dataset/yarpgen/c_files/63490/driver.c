#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)213;
int var_1 = -1037078591;
_Bool var_4 = (_Bool)1;
unsigned short var_11 = (unsigned short)28723;
int zero = 0;
long long int var_13 = -2896431169263201413LL;
_Bool var_14 = (_Bool)0;
int var_15 = -349680606;
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
