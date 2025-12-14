#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10357309025375210143ULL;
unsigned long long int var_7 = 16239658510821821871ULL;
unsigned long long int var_8 = 7623769410683211865ULL;
unsigned long long int var_11 = 4748880663902995058ULL;
unsigned char var_13 = (unsigned char)115;
unsigned long long int var_15 = 17167125999932803538ULL;
signed char var_17 = (signed char)-24;
unsigned long long int var_18 = 2042627121990873552ULL;
int zero = 0;
unsigned long long int var_19 = 5405790482852844530ULL;
unsigned long long int var_20 = 5830128526523147418ULL;
signed char var_21 = (signed char)-87;
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
