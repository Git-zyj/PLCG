#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)55100;
unsigned short var_5 = (unsigned short)20307;
long long int var_6 = -5989207150317620608LL;
unsigned short var_8 = (unsigned short)9554;
int zero = 0;
long long int var_12 = 7754074694418931689LL;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3236025590U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
