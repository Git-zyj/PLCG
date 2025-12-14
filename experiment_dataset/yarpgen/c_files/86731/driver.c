#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2655010839099182794LL;
long long int var_2 = -5372456284723321105LL;
unsigned int var_7 = 3626261111U;
unsigned int var_8 = 3458524347U;
short var_10 = (short)-9132;
long long int var_12 = -7102690407228141050LL;
unsigned int var_13 = 976931565U;
int zero = 0;
long long int var_14 = 5960655114035766833LL;
long long int var_15 = -1915342955330368760LL;
unsigned char var_16 = (unsigned char)17;
long long int var_17 = -1313748914605605140LL;
long long int var_18 = 8815631842772625239LL;
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
