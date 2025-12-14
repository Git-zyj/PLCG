#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2628690992414719776ULL;
unsigned long long int var_3 = 17409116304688485511ULL;
unsigned long long int var_4 = 17187405891072100960ULL;
unsigned long long int var_5 = 13617913504211284124ULL;
unsigned long long int var_6 = 2143126787814086235ULL;
unsigned long long int var_7 = 2341739281040296231ULL;
unsigned long long int var_8 = 16068209536602196079ULL;
unsigned long long int var_9 = 15172050710315743246ULL;
unsigned long long int var_10 = 8705105491306623159ULL;
int zero = 0;
unsigned long long int var_15 = 10918043310855784170ULL;
unsigned long long int var_16 = 4826774156533618621ULL;
unsigned long long int var_17 = 3150666419278925221ULL;
void init() {
}

void checksum() {
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
