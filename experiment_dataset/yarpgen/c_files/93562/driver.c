#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5627;
unsigned long long int var_3 = 17748080164448077845ULL;
unsigned long long int var_4 = 15173164520019840896ULL;
unsigned short var_5 = (unsigned short)62712;
unsigned int var_7 = 1895625884U;
long long int var_8 = -5887820804592313624LL;
unsigned long long int var_9 = 4202368098905923975ULL;
int zero = 0;
int var_10 = -1271905006;
unsigned int var_11 = 2360906936U;
long long int var_12 = -8348104265016146954LL;
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
