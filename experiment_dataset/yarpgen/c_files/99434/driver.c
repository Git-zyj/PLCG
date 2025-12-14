#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -344134895;
long long int var_7 = 2047134754038718734LL;
unsigned long long int var_9 = 5455855028643613024ULL;
long long int var_11 = 7637502504018223793LL;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)32;
long long int var_14 = 6195577157191281024LL;
long long int var_16 = 7581051302393268632LL;
unsigned char var_17 = (unsigned char)235;
unsigned int var_19 = 3879145568U;
int zero = 0;
unsigned char var_20 = (unsigned char)38;
short var_21 = (short)-18430;
void init() {
}

void checksum() {
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
