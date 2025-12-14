#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -1015066489;
long long int var_9 = 3161936970024936910LL;
unsigned short var_18 = (unsigned short)45291;
int zero = 0;
unsigned long long int var_19 = 12030859544802613890ULL;
_Bool var_20 = (_Bool)0;
int var_21 = 841448777;
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
