#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 133503832154529859LL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_9 = 10558436134279227673ULL;
unsigned char var_12 = (unsigned char)129;
long long int var_13 = -3391927292962578084LL;
int var_14 = -347840376;
int zero = 0;
long long int var_17 = 6359796707601229087LL;
unsigned int var_18 = 848405205U;
signed char var_19 = (signed char)-4;
int var_20 = -1236480111;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
