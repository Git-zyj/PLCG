#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1761994355U;
unsigned int var_7 = 339102034U;
unsigned long long int var_8 = 4443942150998120986ULL;
unsigned short var_11 = (unsigned short)53243;
signed char var_12 = (signed char)-43;
signed char var_15 = (signed char)-14;
long long int var_16 = -7694480763181509807LL;
int zero = 0;
signed char var_17 = (signed char)116;
int var_18 = 803746034;
int var_19 = -2105574691;
unsigned short var_20 = (unsigned short)9729;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
