#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 820105282207461238ULL;
unsigned int var_6 = 1276012270U;
unsigned long long int var_7 = 9673914979590439139ULL;
unsigned short var_9 = (unsigned short)24431;
unsigned char var_12 = (unsigned char)19;
unsigned short var_13 = (unsigned short)63915;
unsigned long long int var_15 = 14417858703628914320ULL;
unsigned long long int var_16 = 2551918778091326422ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 16639590190795667117ULL;
void init() {
}

void checksum() {
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
