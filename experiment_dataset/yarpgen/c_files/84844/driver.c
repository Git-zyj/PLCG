#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)20535;
unsigned short var_4 = (unsigned short)5712;
int var_6 = -1034622699;
int var_8 = -1189027058;
unsigned char var_9 = (unsigned char)27;
int zero = 0;
unsigned short var_10 = (unsigned short)28100;
unsigned short var_11 = (unsigned short)26791;
unsigned long long int var_12 = 18109805797666278184ULL;
_Bool var_13 = (_Bool)0;
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
