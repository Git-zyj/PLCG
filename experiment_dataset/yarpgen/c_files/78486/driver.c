#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)15;
signed char var_4 = (signed char)116;
_Bool var_5 = (_Bool)1;
unsigned long long int var_9 = 15321816081873992773ULL;
int var_11 = -215352986;
int var_12 = 10350570;
int zero = 0;
unsigned int var_18 = 4294172421U;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)26815;
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
