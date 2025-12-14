#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 17256045301510498493ULL;
long long int var_8 = 8946418115522473014LL;
unsigned long long int var_10 = 13095975281276806545ULL;
unsigned long long int var_11 = 4017903797053245091ULL;
long long int var_12 = -5563966200258075633LL;
short var_14 = (short)-7867;
long long int var_16 = 9064224408072023868LL;
int zero = 0;
long long int var_19 = 5624698882924222181LL;
long long int var_20 = -9169727028910423700LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
