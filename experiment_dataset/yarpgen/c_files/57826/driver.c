#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18423200989731693495ULL;
unsigned long long int var_1 = 16851112404587829905ULL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 8950688680289012866ULL;
unsigned long long int var_7 = 12702001786504467733ULL;
unsigned long long int var_8 = 6545453471128825451ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)58078;
unsigned long long int var_12 = 15880824721823291943ULL;
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
