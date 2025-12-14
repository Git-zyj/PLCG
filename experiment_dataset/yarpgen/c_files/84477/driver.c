#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-24;
unsigned long long int var_9 = 8750012456138607311ULL;
int zero = 0;
unsigned int var_14 = 3388946022U;
unsigned char var_15 = (unsigned char)67;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 2302703190779726648ULL;
unsigned long long int var_18 = 13010141260468304246ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
