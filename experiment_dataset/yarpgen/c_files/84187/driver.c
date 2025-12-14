#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 9434899787215888792ULL;
int var_8 = 1546135893;
long long int var_13 = -554070064813293126LL;
unsigned long long int var_14 = 1616465677845064780ULL;
int zero = 0;
signed char var_15 = (signed char)-37;
long long int var_16 = -8077032054584675299LL;
int var_17 = -303111980;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
