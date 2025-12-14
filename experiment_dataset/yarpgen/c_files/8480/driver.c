#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 2917813139U;
long long int var_8 = 2605629077747994097LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_20 = 1449463285;
unsigned int var_21 = 2057822378U;
signed char var_22 = (signed char)-21;
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
