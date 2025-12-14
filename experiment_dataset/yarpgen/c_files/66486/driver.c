#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1288753912;
unsigned short var_1 = (unsigned short)47582;
unsigned short var_2 = (unsigned short)50578;
long long int var_3 = -1734783012905309215LL;
long long int var_6 = -1953205226254641718LL;
int zero = 0;
long long int var_10 = 4912296067111833690LL;
_Bool var_11 = (_Bool)0;
long long int var_12 = 4385087400135778178LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
