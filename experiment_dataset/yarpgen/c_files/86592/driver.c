#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14008688574173770035ULL;
unsigned int var_4 = 1245326647U;
unsigned int var_5 = 4108819201U;
unsigned int var_6 = 1144011146U;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 11604734518921222573ULL;
unsigned int var_11 = 2539977637U;
unsigned int var_13 = 1655745604U;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 2477261135918759509ULL;
int zero = 0;
unsigned long long int var_17 = 17539541250445255169ULL;
unsigned long long int var_18 = 7898563437803371348ULL;
unsigned int var_19 = 525180818U;
unsigned int var_20 = 635365442U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
