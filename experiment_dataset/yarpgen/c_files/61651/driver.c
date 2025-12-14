#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -96326860205716879LL;
long long int var_10 = -5331769788588949737LL;
unsigned long long int var_11 = 1024824858350757051ULL;
int zero = 0;
long long int var_14 = 8973804562935500813LL;
long long int var_15 = 218727532392730020LL;
void init() {
}

void checksum() {
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
