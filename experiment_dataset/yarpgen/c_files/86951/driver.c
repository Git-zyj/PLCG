#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2844750309782332282ULL;
unsigned char var_3 = (unsigned char)240;
int var_5 = 140164821;
long long int var_8 = 1657157797070367073LL;
unsigned long long int var_9 = 10458731540100813385ULL;
int zero = 0;
unsigned int var_12 = 1757980028U;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
