#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_18 = 1719026834;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)30299;
unsigned long long int var_21 = 15388769380582195804ULL;
unsigned long long int var_22 = 4770511379936646527ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
