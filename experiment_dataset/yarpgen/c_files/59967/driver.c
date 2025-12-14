#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)133;
unsigned char var_3 = (unsigned char)213;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)-39;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 17365617095595369812ULL;
int zero = 0;
unsigned long long int var_13 = 7070880331960155196ULL;
signed char var_14 = (signed char)-108;
int var_15 = -602655662;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
