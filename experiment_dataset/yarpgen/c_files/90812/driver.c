#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2244098823U;
unsigned short var_3 = (unsigned short)31050;
unsigned long long int var_5 = 11353018526271443506ULL;
signed char var_9 = (signed char)-22;
unsigned long long int var_18 = 3738115347700565967ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = -1230905381;
unsigned long long int var_21 = 3957800207491019372ULL;
short var_22 = (short)13591;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
