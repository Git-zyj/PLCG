#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6280254537072131669LL;
unsigned int var_9 = 369961950U;
long long int var_10 = -6697677267622711250LL;
int zero = 0;
unsigned int var_13 = 2329674889U;
unsigned long long int var_14 = 9870146942746153598ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
