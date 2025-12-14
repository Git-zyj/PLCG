#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1554704195;
unsigned short var_1 = (unsigned short)61383;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 8364673148839582823ULL;
short var_9 = (short)-26972;
long long int var_11 = -2975754690509977055LL;
unsigned long long int var_15 = 10010254462718711582ULL;
int var_17 = -1113154455;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)15131;
unsigned long long int var_21 = 17362304953182158385ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
