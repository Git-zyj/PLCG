#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1145774278U;
int var_4 = 930434089;
long long int var_9 = 9012601454987910007LL;
long long int var_10 = 1601358122661387529LL;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = -2687423540234369595LL;
unsigned long long int var_14 = 15902497732591392742ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
