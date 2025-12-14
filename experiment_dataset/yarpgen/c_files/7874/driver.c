#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3528931717045852394LL;
unsigned short var_7 = (unsigned short)15051;
int zero = 0;
unsigned long long int var_17 = 3080661366496295430ULL;
long long int var_18 = 1427030412549503601LL;
unsigned long long int var_19 = 78227154414547701ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
