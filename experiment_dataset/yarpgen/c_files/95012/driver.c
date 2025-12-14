#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_3 = -7147605582007560046LL;
unsigned long long int var_5 = 15709926762150842093ULL;
unsigned long long int var_6 = 4242175355979567092ULL;
signed char var_8 = (signed char)45;
long long int var_11 = 6321635868306081818LL;
int zero = 0;
signed char var_19 = (signed char)104;
long long int var_20 = -5851221229057762928LL;
unsigned short var_21 = (unsigned short)62531;
unsigned long long int var_22 = 7928274079971587638ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
