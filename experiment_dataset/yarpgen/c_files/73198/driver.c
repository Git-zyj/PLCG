#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4234883709U;
unsigned int var_4 = 4238430282U;
unsigned int var_8 = 3655175917U;
unsigned char var_9 = (unsigned char)150;
unsigned int var_10 = 2409578684U;
unsigned int var_16 = 3016714111U;
int zero = 0;
unsigned int var_17 = 222745335U;
unsigned int var_18 = 1393533034U;
unsigned char var_19 = (unsigned char)71;
unsigned int var_20 = 3243146565U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
