#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10995335320974041842ULL;
unsigned int var_8 = 2759674222U;
int var_9 = 437873617;
int zero = 0;
unsigned long long int var_10 = 14580208217343334193ULL;
int var_11 = -714043414;
unsigned short var_12 = (unsigned short)5845;
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
