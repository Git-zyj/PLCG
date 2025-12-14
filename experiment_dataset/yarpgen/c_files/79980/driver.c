#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12269666895228101294ULL;
long long int var_2 = 6027231312823071013LL;
_Bool var_3 = (_Bool)1;
long long int var_6 = -4555396252456393140LL;
unsigned long long int var_8 = 3115182817776671420ULL;
int var_9 = -1171433589;
unsigned short var_11 = (unsigned short)51334;
int var_13 = -2106058897;
int zero = 0;
unsigned char var_16 = (unsigned char)51;
long long int var_17 = -2892740021689765988LL;
unsigned short var_18 = (unsigned short)17508;
unsigned long long int var_19 = 16560848592210883871ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
