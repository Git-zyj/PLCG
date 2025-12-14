#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-4;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 15764734454259372408ULL;
int var_3 = -831476302;
unsigned int var_8 = 3842353749U;
unsigned long long int var_9 = 7203230298233381231ULL;
unsigned short var_11 = (unsigned short)52272;
int var_12 = -1763930299;
int zero = 0;
long long int var_13 = 1920453285871498349LL;
unsigned int var_14 = 541468945U;
unsigned long long int var_15 = 15850592382691111457ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
