#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11363174080980062108ULL;
unsigned long long int var_2 = 11400469219218897823ULL;
unsigned long long int var_4 = 12607394579358502289ULL;
unsigned short var_7 = (unsigned short)59140;
_Bool var_9 = (_Bool)1;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_13 = -8858163340223635701LL;
unsigned long long int var_14 = 4660965292908220051ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
