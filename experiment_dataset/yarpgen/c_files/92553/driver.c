#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1491599338;
unsigned long long int var_4 = 5726172331792957704ULL;
signed char var_8 = (signed char)106;
int var_9 = -298606304;
unsigned short var_12 = (unsigned short)52451;
long long int var_15 = 3572793924212273378LL;
signed char var_17 = (signed char)25;
int zero = 0;
unsigned int var_18 = 322471342U;
unsigned int var_19 = 3607659023U;
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
