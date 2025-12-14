#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15465407452131800740ULL;
long long int var_5 = -3096265169281364281LL;
unsigned char var_8 = (unsigned char)187;
unsigned long long int var_9 = 14185154130548463630ULL;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)72;
unsigned long long int var_13 = 11666079276603799146ULL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
