#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4946305532337834325LL;
unsigned long long int var_3 = 1823357580691731101ULL;
unsigned long long int var_9 = 12303455038375087947ULL;
int zero = 0;
unsigned long long int var_13 = 13063188220769804234ULL;
long long int var_14 = 4325364200577182049LL;
unsigned int var_15 = 2323330798U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
