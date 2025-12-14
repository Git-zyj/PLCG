#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1360792648928560367ULL;
_Bool var_4 = (_Bool)1;
unsigned int var_8 = 3882844826U;
unsigned int var_11 = 2907980359U;
unsigned short var_12 = (unsigned short)4268;
int zero = 0;
unsigned long long int var_20 = 18406713248016265760ULL;
unsigned long long int var_21 = 12488166920096008830ULL;
void init() {
}

void checksum() {
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
