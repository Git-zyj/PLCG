#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1300161059748608113LL;
long long int var_3 = 9038853496968620966LL;
signed char var_4 = (signed char)-78;
unsigned long long int var_5 = 1558929990651286765ULL;
int zero = 0;
long long int var_12 = -3967054533900558978LL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
