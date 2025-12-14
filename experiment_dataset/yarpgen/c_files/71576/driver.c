#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1449413636U;
int var_9 = -1672798091;
long long int var_10 = 7864552752982882292LL;
unsigned long long int var_14 = 4361379697688971327ULL;
int zero = 0;
unsigned int var_18 = 2083496263U;
unsigned char var_19 = (unsigned char)121;
unsigned long long int var_20 = 14696545979159335102ULL;
unsigned short var_21 = (unsigned short)18281;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
