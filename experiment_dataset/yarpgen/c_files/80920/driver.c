#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2763852149584221683LL;
int var_4 = -1042863669;
long long int var_5 = 4905480787328020244LL;
int var_6 = 966525585;
unsigned long long int var_8 = 17413618886687823846ULL;
long long int var_9 = -7343957319080662876LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = -2114848921730155718LL;
_Bool var_16 = (_Bool)1;
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
