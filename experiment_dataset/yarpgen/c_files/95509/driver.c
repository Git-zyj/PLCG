#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 4789885442905749486LL;
unsigned int var_5 = 262991714U;
int var_7 = 1588698638;
unsigned int var_8 = 3858987446U;
int var_12 = -1887120309;
int zero = 0;
unsigned long long int var_16 = 11509550256938009663ULL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
