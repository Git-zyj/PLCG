#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)26;
int var_3 = -968589042;
int var_7 = 317665719;
int var_11 = -1556225633;
int zero = 0;
unsigned long long int var_14 = 11086171436414791485ULL;
int var_15 = -572446215;
signed char var_16 = (signed char)-54;
unsigned short var_17 = (unsigned short)40366;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
