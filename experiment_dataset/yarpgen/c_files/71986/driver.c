#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)104;
long long int var_6 = 3499823826014548633LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 15848393564284469805ULL;
long long int var_21 = -1674467492778613179LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
