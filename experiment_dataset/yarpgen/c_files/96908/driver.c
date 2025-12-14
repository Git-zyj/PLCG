#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1309008322956246090LL;
_Bool var_3 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_13 = 1441476422;
short var_14 = (short)-31735;
unsigned long long int var_15 = 14850731835497367732ULL;
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
