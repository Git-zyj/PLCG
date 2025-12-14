#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41507;
unsigned long long int var_9 = 7909408003665472989ULL;
int var_10 = 591672042;
signed char var_12 = (signed char)73;
unsigned char var_13 = (unsigned char)52;
int zero = 0;
unsigned long long int var_14 = 1169584629022431706ULL;
unsigned long long int var_15 = 11229931971761658696ULL;
unsigned long long int var_16 = 17661224259122668108ULL;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-24548;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
