#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)89;
signed char var_1 = (signed char)122;
unsigned long long int var_2 = 3600078866810217736ULL;
unsigned short var_5 = (unsigned short)12862;
int var_6 = 171247708;
signed char var_7 = (signed char)68;
int var_9 = 1757305466;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)-41;
int var_16 = 583371698;
_Bool var_17 = (_Bool)0;
int var_18 = 372987214;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
