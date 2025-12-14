#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5896536274217355359LL;
signed char var_3 = (signed char)80;
unsigned long long int var_5 = 5984749085341011952ULL;
_Bool var_7 = (_Bool)0;
int zero = 0;
long long int var_15 = 7403651310287947195LL;
unsigned char var_16 = (unsigned char)10;
short var_17 = (short)-16079;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
