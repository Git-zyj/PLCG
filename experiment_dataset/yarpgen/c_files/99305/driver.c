#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7177838894567404694LL;
unsigned long long int var_10 = 12955620951971047384ULL;
int zero = 0;
unsigned long long int var_14 = 8259320523746287103ULL;
long long int var_15 = -1037206366384947019LL;
unsigned long long int var_16 = 4443115761725543821ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
