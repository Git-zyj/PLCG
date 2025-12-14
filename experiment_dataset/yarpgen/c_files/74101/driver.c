#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7562999062022597032LL;
unsigned char var_5 = (unsigned char)208;
unsigned char var_6 = (unsigned char)18;
int zero = 0;
long long int var_16 = -4153061094251347644LL;
int var_17 = 314596722;
unsigned int var_18 = 3857526255U;
void init() {
}

void checksum() {
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
