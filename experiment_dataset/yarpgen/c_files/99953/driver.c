#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)208;
unsigned long long int var_8 = 9888601739870058152ULL;
long long int var_9 = 302076022511014815LL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 1429876334U;
unsigned long long int var_12 = 5609398786649454946ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
