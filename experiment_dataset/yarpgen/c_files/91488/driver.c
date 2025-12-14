#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10924125972229769858ULL;
long long int var_2 = 3925774303489216609LL;
_Bool var_4 = (_Bool)0;
long long int var_5 = -6297405393322626660LL;
long long int var_8 = -1890459453004120413LL;
short var_9 = (short)-25719;
int zero = 0;
unsigned short var_10 = (unsigned short)19790;
unsigned long long int var_11 = 3382561351301369262ULL;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
