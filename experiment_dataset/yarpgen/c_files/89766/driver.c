#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1557759004;
_Bool var_2 = (_Bool)1;
long long int var_4 = 2557586825669547525LL;
unsigned char var_5 = (unsigned char)140;
unsigned long long int var_6 = 13247827276746931580ULL;
unsigned int var_7 = 3835863170U;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned char var_12 = (unsigned char)138;
unsigned long long int var_14 = 18002107415775629712ULL;
long long int var_15 = 3893969323832961417LL;
long long int var_16 = 3164275421390781701LL;
int zero = 0;
unsigned long long int var_20 = 1092435180187464861ULL;
long long int var_21 = 3232954949642350555LL;
long long int var_22 = 5590943386814013833LL;
unsigned long long int var_23 = 14701043552487904493ULL;
unsigned short var_24 = (unsigned short)32015;
int var_25 = 320608461;
unsigned int var_26 = 1185216849U;
_Bool var_27 = (_Bool)1;
_Bool var_28 = (_Bool)0;
long long int var_29 = -1398615856263705556LL;
int var_30 = -1482862499;
unsigned int var_31 = 3400251015U;
unsigned int var_32 = 2731435587U;
unsigned long long int var_33 = 14399498515411842945ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
