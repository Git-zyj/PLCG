#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)53285;
short var_9 = (short)832;
int var_18 = 575984418;
int zero = 0;
signed char var_20 = (signed char)75;
long long int var_21 = -8945930524697377337LL;
unsigned long long int var_22 = 12029213085068133032ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
