#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2153547351354006004ULL;
short var_1 = (short)4841;
unsigned short var_3 = (unsigned short)45174;
long long int var_6 = 308055300048570243LL;
short var_7 = (short)-29987;
short var_8 = (short)9797;
unsigned long long int var_9 = 10945284159397501390ULL;
unsigned short var_13 = (unsigned short)56548;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 5597161254680041690ULL;
short var_20 = (short)31270;
long long int var_21 = -8723299133075300904LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
