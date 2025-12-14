#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_2 = 10980235233033844420ULL;
long long int var_3 = -4702827131436441433LL;
long long int var_4 = -5828966025954299446LL;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_10 = -1536192377;
_Bool var_11 = (_Bool)1;
long long int var_12 = -4642490814679636545LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
