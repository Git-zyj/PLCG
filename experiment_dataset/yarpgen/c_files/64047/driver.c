#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2479816259442873576LL;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)86;
long long int var_4 = 6820104164998074099LL;
unsigned long long int var_6 = 8120754584811848708ULL;
unsigned long long int var_7 = 6609504857619232363ULL;
signed char var_8 = (signed char)-12;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 14458535668260090432ULL;
_Bool var_12 = (_Bool)0;
long long int var_13 = 809006417956594493LL;
_Bool var_14 = (_Bool)1;
long long int var_15 = -1611226389241639494LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
