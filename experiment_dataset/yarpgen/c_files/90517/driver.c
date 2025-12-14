#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)89;
unsigned long long int var_1 = 618492851777743304ULL;
unsigned long long int var_5 = 15730487305062134205ULL;
unsigned int var_8 = 1857773475U;
unsigned long long int var_9 = 2367318125992682724ULL;
signed char var_15 = (signed char)108;
int zero = 0;
unsigned char var_16 = (unsigned char)145;
unsigned long long int var_17 = 262679564620898617ULL;
unsigned long long int var_18 = 11310064884720989241ULL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
