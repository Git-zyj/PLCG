#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_4 = -1189214702;
long long int var_5 = -6186614360772440957LL;
unsigned long long int var_9 = 4244441711615949579ULL;
unsigned char var_11 = (unsigned char)147;
int zero = 0;
int var_12 = -18323202;
long long int var_13 = -9109414044545088650LL;
unsigned int var_14 = 2099098835U;
unsigned long long int var_15 = 3209806578603951452ULL;
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
