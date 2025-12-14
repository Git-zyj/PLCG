#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5956899103533398708LL;
unsigned char var_2 = (unsigned char)230;
int var_4 = -1880636842;
signed char var_8 = (signed char)-11;
unsigned long long int var_9 = 13602708291151169755ULL;
unsigned long long int var_10 = 4591644322168024589ULL;
int zero = 0;
unsigned int var_11 = 2453898648U;
unsigned long long int var_12 = 2222486958977437647ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
