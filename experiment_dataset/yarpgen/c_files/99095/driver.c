#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1487304708;
int var_1 = -217269360;
int var_3 = -721225319;
unsigned long long int var_4 = 15766158260782232825ULL;
long long int var_10 = 2647018385954108115LL;
int zero = 0;
unsigned int var_12 = 3661837002U;
unsigned long long int var_13 = 4664321884010714837ULL;
signed char var_14 = (signed char)-70;
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
