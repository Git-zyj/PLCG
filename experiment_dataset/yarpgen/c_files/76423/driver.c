#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5349342536000092517ULL;
signed char var_6 = (signed char)-85;
unsigned int var_9 = 893054297U;
signed char var_14 = (signed char)68;
unsigned int var_15 = 365084313U;
_Bool var_19 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-21005;
unsigned short var_22 = (unsigned short)50219;
long long int var_23 = -6236423571428226172LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
