#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1409455322;
unsigned int var_4 = 904593617U;
unsigned long long int var_9 = 11619440141534616274ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_13 = 1852264742381672785LL;
unsigned int var_14 = 690111911U;
void init() {
}

void checksum() {
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
