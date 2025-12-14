#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18017;
unsigned char var_4 = (unsigned char)13;
unsigned int var_6 = 1326223549U;
short var_9 = (short)13380;
int var_12 = -569289838;
unsigned char var_13 = (unsigned char)114;
long long int var_15 = 8241065471044841632LL;
int zero = 0;
unsigned char var_17 = (unsigned char)179;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 11875408196767491630ULL;
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
