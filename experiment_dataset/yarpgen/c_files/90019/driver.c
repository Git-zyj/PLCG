#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1951241364;
int var_5 = 1114980209;
int var_6 = -2095911368;
unsigned char var_12 = (unsigned char)189;
signed char var_16 = (signed char)-66;
signed char var_17 = (signed char)-101;
int zero = 0;
int var_18 = -1463268524;
_Bool var_19 = (_Bool)0;
long long int var_20 = 8589786941088538999LL;
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
