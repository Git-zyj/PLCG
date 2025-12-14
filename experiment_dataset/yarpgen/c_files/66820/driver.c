#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13794707510938179627ULL;
unsigned short var_3 = (unsigned short)15488;
int zero = 0;
unsigned int var_17 = 4188651025U;
unsigned long long int var_18 = 7816482369286711390ULL;
long long int var_19 = -9109018278777451975LL;
int var_20 = 1698788013;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
