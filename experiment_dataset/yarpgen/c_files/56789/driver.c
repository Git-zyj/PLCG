#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)56;
unsigned long long int var_3 = 10231724269673034543ULL;
unsigned long long int var_4 = 13916311635795419608ULL;
unsigned long long int var_6 = 3600417536059166863ULL;
long long int var_8 = -1813518111891711706LL;
unsigned long long int var_9 = 15173565143194596324ULL;
unsigned char var_11 = (unsigned char)196;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)123;
unsigned int var_15 = 859454836U;
int var_17 = 315568288;
int zero = 0;
unsigned char var_18 = (unsigned char)123;
int var_19 = 1141976973;
int var_20 = -1618121163;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
