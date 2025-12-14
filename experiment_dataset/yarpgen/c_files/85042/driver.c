#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)43;
unsigned long long int var_2 = 9013809702978544784ULL;
signed char var_4 = (signed char)20;
unsigned long long int var_6 = 169332492962103588ULL;
unsigned int var_9 = 942467058U;
int var_14 = -53769100;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 3182340406U;
unsigned char var_21 = (unsigned char)148;
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
