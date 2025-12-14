#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 4447999759429767081ULL;
unsigned short var_5 = (unsigned short)62208;
unsigned short var_6 = (unsigned short)10274;
unsigned long long int var_7 = 14697011933710430735ULL;
unsigned char var_9 = (unsigned char)213;
int zero = 0;
long long int var_10 = -2733801976667037166LL;
int var_11 = 1454438792;
long long int var_12 = -3702187880569452784LL;
unsigned char var_13 = (unsigned char)94;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
