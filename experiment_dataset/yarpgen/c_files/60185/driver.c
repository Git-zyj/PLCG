#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)51581;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 1584479256U;
unsigned char var_11 = (unsigned char)250;
unsigned char var_16 = (unsigned char)90;
long long int var_18 = -5790595208072749989LL;
int zero = 0;
long long int var_19 = 7599583233239102238LL;
long long int var_20 = -6141203160798863711LL;
unsigned long long int var_21 = 5596072049901423729ULL;
_Bool var_22 = (_Bool)0;
int var_23 = -2126974608;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
