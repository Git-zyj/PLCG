#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12847224851618474454ULL;
unsigned short var_3 = (unsigned short)53532;
unsigned int var_4 = 1844897980U;
short var_7 = (short)786;
unsigned long long int var_9 = 16739977530048075857ULL;
int zero = 0;
int var_10 = -920939770;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
