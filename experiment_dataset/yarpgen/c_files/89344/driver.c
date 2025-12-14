#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-102;
unsigned long long int var_7 = 7986207730380288731ULL;
unsigned long long int var_15 = 16769925859854373598ULL;
int zero = 0;
long long int var_18 = 9072768675997570623LL;
unsigned long long int var_19 = 15476073320841263683ULL;
signed char var_20 = (signed char)-83;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
