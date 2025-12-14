#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-26493;
unsigned long long int var_3 = 5313479171080054913ULL;
_Bool var_5 = (_Bool)0;
int zero = 0;
unsigned short var_11 = (unsigned short)2929;
unsigned long long int var_12 = 2910559226467117307ULL;
void init() {
}

void checksum() {
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
