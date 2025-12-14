#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -186607009;
long long int var_3 = 8161229808381775935LL;
unsigned long long int var_7 = 1855418649636828251ULL;
int var_13 = 105750338;
long long int var_18 = -6163937245977227204LL;
int zero = 0;
short var_20 = (short)-25761;
long long int var_21 = -8482527812151160858LL;
long long int var_22 = -6680753867606508283LL;
void init() {
}

void checksum() {
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
