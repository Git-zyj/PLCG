#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_2 = (unsigned short)58720;
int var_4 = -1446005715;
unsigned char var_6 = (unsigned char)63;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 5217749493726372108ULL;
long long int var_13 = -5468206418873403273LL;
long long int var_14 = -5124301151283925054LL;
int var_17 = 1668778987;
unsigned long long int var_18 = 16243362761792377156ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)11093;
unsigned short var_21 = (unsigned short)18820;
long long int var_22 = -5960717235283119940LL;
unsigned int var_23 = 683966297U;
unsigned char var_24 = (unsigned char)188;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
