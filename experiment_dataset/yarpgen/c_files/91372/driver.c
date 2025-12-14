#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1611158893;
signed char var_2 = (signed char)-107;
_Bool var_5 = (_Bool)1;
_Bool var_9 = (_Bool)0;
long long int var_10 = -196848036106503781LL;
_Bool var_12 = (_Bool)0;
short var_15 = (short)244;
int zero = 0;
unsigned short var_18 = (unsigned short)21011;
short var_19 = (short)-27090;
long long int var_20 = -7333264255423549661LL;
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
