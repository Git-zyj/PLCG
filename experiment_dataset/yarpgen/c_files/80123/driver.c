#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 25707614U;
short var_3 = (short)13760;
long long int var_5 = 5028200081998373519LL;
unsigned short var_6 = (unsigned short)47034;
unsigned long long int var_7 = 6425256939080280333ULL;
unsigned int var_8 = 2386131894U;
int zero = 0;
unsigned short var_10 = (unsigned short)60243;
unsigned long long int var_11 = 14574785371213681224ULL;
unsigned short var_12 = (unsigned short)1517;
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
