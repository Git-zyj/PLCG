#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44683;
unsigned short var_9 = (unsigned short)168;
unsigned long long int var_11 = 16294283794745728564ULL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 10620937287284399204ULL;
unsigned short var_14 = (unsigned short)53821;
long long int var_16 = 4418378995655544055LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)64376;
unsigned short var_21 = (unsigned short)26779;
unsigned short var_22 = (unsigned short)22724;
long long int var_23 = 2396186802601380520LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
