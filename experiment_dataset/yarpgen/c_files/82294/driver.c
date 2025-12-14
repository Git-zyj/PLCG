#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2771200246334830933LL;
signed char var_3 = (signed char)-19;
long long int var_5 = -2054634466450999758LL;
unsigned int var_8 = 1824528861U;
long long int var_9 = 5512210991902554054LL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 4152081296475999574ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
