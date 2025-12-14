#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = -5890937411481756489LL;
signed char var_2 = (signed char)-74;
unsigned long long int var_3 = 5230909180797615576ULL;
int var_5 = 1991065691;
signed char var_6 = (signed char)87;
long long int var_11 = -6347962082194491894LL;
int zero = 0;
long long int var_12 = -2644379952288085125LL;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)1;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
