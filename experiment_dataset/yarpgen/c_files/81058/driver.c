#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13864308906596940541ULL;
unsigned long long int var_2 = 315768618321304447ULL;
unsigned long long int var_5 = 4054662339549388562ULL;
unsigned long long int var_10 = 17688430034671705846ULL;
int zero = 0;
unsigned long long int var_18 = 1240460226888501580ULL;
unsigned long long int var_19 = 6144703398493652651ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
