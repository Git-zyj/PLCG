#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8385272306822472752ULL;
unsigned long long int var_12 = 8640811678235244212ULL;
unsigned long long int var_15 = 14952415815407463529ULL;
int zero = 0;
unsigned long long int var_16 = 18094456588048876547ULL;
unsigned long long int var_17 = 6568192312253979574ULL;
unsigned long long int var_18 = 15189533439972321914ULL;
void init() {
}

void checksum() {
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
