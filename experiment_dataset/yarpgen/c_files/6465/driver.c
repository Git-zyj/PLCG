#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1383164966;
unsigned int var_3 = 3175967840U;
unsigned short var_6 = (unsigned short)6600;
signed char var_7 = (signed char)26;
int zero = 0;
unsigned int var_19 = 226050894U;
unsigned char var_20 = (unsigned char)35;
long long int var_21 = 4589993612834125672LL;
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
