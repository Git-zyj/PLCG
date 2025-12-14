#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17854736601845708346ULL;
long long int var_1 = 275240295702343463LL;
long long int var_3 = -359095533802294886LL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 15284677715788597575ULL;
unsigned long long int var_9 = 4890213989871794096ULL;
_Bool var_13 = (_Bool)1;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 9830650118335779023ULL;
unsigned long long int var_20 = 3140635822110742472ULL;
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
