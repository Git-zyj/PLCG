#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4954382486592174758ULL;
unsigned long long int var_7 = 622282340833363465ULL;
unsigned long long int var_9 = 4021675968094046192ULL;
unsigned long long int var_13 = 4117547756580033795ULL;
unsigned long long int var_15 = 7930845998797716386ULL;
unsigned long long int var_16 = 2145071776028965479ULL;
unsigned long long int var_17 = 9550113989748694337ULL;
int zero = 0;
unsigned long long int var_19 = 1844133775367466312ULL;
unsigned long long int var_20 = 2044710010997893129ULL;
unsigned long long int var_21 = 10051278836473358722ULL;
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
