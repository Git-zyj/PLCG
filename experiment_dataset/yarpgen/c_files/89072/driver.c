#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 771589673U;
unsigned short var_3 = (unsigned short)12709;
unsigned short var_5 = (unsigned short)64176;
long long int var_6 = -26523578999495223LL;
unsigned char var_7 = (unsigned char)37;
long long int var_9 = -8212348420031473070LL;
unsigned long long int var_10 = 10809736658501028340ULL;
int zero = 0;
long long int var_11 = 1929990569591498573LL;
int var_12 = 1532409690;
long long int var_13 = 5411548550106132861LL;
long long int var_14 = 6394907672226029686LL;
unsigned char var_15 = (unsigned char)160;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
