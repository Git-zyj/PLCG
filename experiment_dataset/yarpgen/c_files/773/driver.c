#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 14322054704865549468ULL;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)25289;
int zero = 0;
int var_16 = 2081395163;
short var_17 = (short)-5397;
void init() {
}

void checksum() {
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
