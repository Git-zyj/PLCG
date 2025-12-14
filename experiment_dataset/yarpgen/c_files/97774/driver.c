#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2567790333045742031LL;
unsigned int var_1 = 2002810111U;
unsigned char var_2 = (unsigned char)254;
unsigned int var_9 = 2867378994U;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)12;
int zero = 0;
long long int var_19 = 8562359019405836067LL;
unsigned long long int var_20 = 16687321187893177404ULL;
unsigned int var_21 = 634973893U;
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
