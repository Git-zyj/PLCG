#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4933963215466604833LL;
unsigned long long int var_17 = 12992754028785544928ULL;
int zero = 0;
unsigned long long int var_18 = 16119016342775966946ULL;
unsigned short var_19 = (unsigned short)14209;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
