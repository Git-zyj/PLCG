#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8964584834563699531LL;
_Bool var_7 = (_Bool)0;
long long int var_10 = -593013684226698193LL;
unsigned char var_15 = (unsigned char)208;
int zero = 0;
unsigned int var_17 = 2711836622U;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 17124832558697252870ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
