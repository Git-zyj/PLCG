#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5504115071970316816ULL;
unsigned long long int var_2 = 12697049133703796406ULL;
unsigned long long int var_4 = 14562789654342308256ULL;
unsigned long long int var_5 = 15832851841098866525ULL;
unsigned long long int var_6 = 6113561812443877771ULL;
unsigned long long int var_7 = 18286690356863157111ULL;
unsigned long long int var_8 = 9396291507598540512ULL;
unsigned long long int var_9 = 1302006362771724719ULL;
unsigned long long int var_10 = 4786697786709778955ULL;
unsigned long long int var_12 = 16494493007598864010ULL;
unsigned long long int var_13 = 5822841530082629635ULL;
int zero = 0;
unsigned long long int var_16 = 7853388879232034854ULL;
unsigned long long int var_17 = 2390636453679920518ULL;
unsigned long long int var_18 = 17429993805889763724ULL;
unsigned long long int var_19 = 14004350615400616224ULL;
unsigned long long int var_20 = 29487217288680495ULL;
unsigned long long int var_21 = 1437556992791540821ULL;
unsigned long long int var_22 = 4248323134852244231ULL;
unsigned long long int var_23 = 9833556551520378307ULL;
unsigned long long int var_24 = 9478691569561297064ULL;
unsigned long long int arr_0 [16] ;
unsigned long long int arr_1 [16] ;
unsigned long long int arr_2 [16] ;
unsigned long long int arr_4 [19] ;
unsigned long long int arr_5 [19] ;
unsigned long long int arr_6 [19] [19] ;
unsigned long long int arr_8 [19] [19] ;
unsigned long long int arr_10 [19] ;
unsigned long long int arr_11 [19] [19] ;
unsigned long long int arr_13 [19] [19] [19] [19] ;
unsigned long long int arr_14 [19] [19] [19] [19] ;
unsigned long long int arr_16 [19] [19] [19] [19] [19] [19] ;
unsigned long long int arr_3 [16] ;
unsigned long long int arr_7 [19] [19] ;
unsigned long long int arr_17 [19] ;
unsigned long long int arr_18 [19] [19] [19] [19] ;
unsigned long long int arr_19 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 3700856380554159970ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 7992281252257669034ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 9780893942054975792ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 8196840749309507626ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 7756981612871550404ULL : 18215691449498061358ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = 16982308341882765058ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 8687817589801130058ULL : 12745137654387049277ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 6702720318307238351ULL : 9876323751342560630ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_11 [i_0] [i_1] = 15134367648783576480ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 12969356897723748235ULL : 14193887074371743201ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 14236022047248722391ULL : 17513990969950761647ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 8484230161751472742ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 14390449766166788335ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 16240960595074240092ULL : 16067736419476152918ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 13461754655370586945ULL : 8669470052341599737ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 16769386822602039418ULL : 15285528418556235417ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 14374735993302822232ULL : 3470769039965408253ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
