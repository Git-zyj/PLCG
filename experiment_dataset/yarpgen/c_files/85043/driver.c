#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)34738;
long long int var_12 = -2571692820453718849LL;
unsigned short var_13 = (unsigned short)26456;
long long int var_16 = 5573011311420721756LL;
int zero = 0;
unsigned int var_17 = 483043701U;
unsigned long long int var_18 = 4286319308211298405ULL;
void init() {
}

void checksum() {
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
