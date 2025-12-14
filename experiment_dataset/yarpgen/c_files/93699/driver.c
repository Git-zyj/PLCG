#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)209;
unsigned int var_3 = 3167379839U;
unsigned long long int var_5 = 17544528201897239895ULL;
unsigned long long int var_10 = 8603179650489206702ULL;
int zero = 0;
signed char var_17 = (signed char)35;
unsigned long long int var_18 = 11462650818641561761ULL;
unsigned int var_19 = 3655073847U;
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
