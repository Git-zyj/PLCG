#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -1048595316438758405LL;
unsigned int var_8 = 4093279378U;
_Bool var_12 = (_Bool)1;
unsigned long long int var_14 = 8529988036430149703ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)251;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
