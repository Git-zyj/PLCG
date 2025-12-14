#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)9217;
signed char var_5 = (signed char)18;
int var_7 = -1530980698;
unsigned char var_18 = (unsigned char)110;
int zero = 0;
unsigned int var_19 = 599229052U;
signed char var_20 = (signed char)-29;
signed char var_21 = (signed char)41;
void init() {
}

void checksum() {
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
