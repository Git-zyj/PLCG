#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7853857104475499205LL;
long long int var_4 = 3309302804940109869LL;
long long int var_7 = -6577871587826672224LL;
long long int var_8 = 3904313021736696975LL;
int zero = 0;
long long int var_14 = 6844473421422866232LL;
long long int var_15 = 5345420748507223578LL;
long long int var_16 = -2982359731379589927LL;
void init() {
}

void checksum() {
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
