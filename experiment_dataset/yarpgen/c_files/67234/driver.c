#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5844214615774093675ULL;
int var_2 = -1263558006;
int var_11 = 1174489577;
int var_17 = 1699731980;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 2433588817855252612ULL;
int var_20 = -157159008;
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
