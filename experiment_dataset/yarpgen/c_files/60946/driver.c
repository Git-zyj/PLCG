#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)27;
unsigned long long int var_2 = 9425190626410034919ULL;
unsigned int var_6 = 3677319782U;
int var_7 = 1685846757;
signed char var_8 = (signed char)121;
int var_10 = -2028798804;
signed char var_11 = (signed char)-21;
unsigned int var_12 = 3559508770U;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 7653988669266518510ULL;
unsigned char var_15 = (unsigned char)32;
unsigned long long int var_16 = 14432846372304152263ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
