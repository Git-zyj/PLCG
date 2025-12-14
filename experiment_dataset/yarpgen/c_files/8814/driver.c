#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4522218455833934099LL;
long long int var_3 = 5520385595309751310LL;
unsigned int var_9 = 1085760118U;
unsigned int var_10 = 2487685002U;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 8993238872050880124ULL;
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
