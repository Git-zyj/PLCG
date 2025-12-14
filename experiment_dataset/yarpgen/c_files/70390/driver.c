#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)43979;
_Bool var_3 = (_Bool)0;
unsigned int var_9 = 369864300U;
long long int var_15 = 1218477407797638943LL;
int zero = 0;
unsigned int var_18 = 2043164544U;
long long int var_19 = 3527250450143914019LL;
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
