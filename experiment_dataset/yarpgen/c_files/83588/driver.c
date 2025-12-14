#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2055156062;
unsigned long long int var_9 = 9321595985454073602ULL;
unsigned long long int var_11 = 15734700985012353727ULL;
unsigned char var_15 = (unsigned char)174;
unsigned int var_16 = 1185297182U;
int zero = 0;
unsigned long long int var_18 = 17018682568024608522ULL;
unsigned long long int var_19 = 3421818817614649396ULL;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 12394419722651324895ULL;
unsigned long long int var_22 = 4239790165321172165ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
