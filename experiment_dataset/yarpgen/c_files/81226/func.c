/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81226
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 1; i_2 < 22; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */short) (unsigned short)65533);
                                arr_11 [(unsigned short)2] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65521))))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) ^ (arr_4 [i_0] [i_1]))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)-23521)), (arr_2 [i_2 - 1] [i_2 - 1]))))));
                                var_14 ^= ((/* implicit */unsigned long long int) ((min((min((2085994531U), (((/* implicit */unsigned int) (unsigned short)2)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (unsigned short)5))))))) < (arr_3 [i_0])));
                                var_15 += ((/* implicit */_Bool) ((unsigned short) arr_9 [i_0] [i_0] [i_2] [i_3] [i_3]));
                                arr_12 [i_0] [(unsigned char)7] [i_1] [(short)18] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((short) arr_2 [20LL] [i_1])))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */signed char) ((((/* implicit */int) (short)8192)) % (((/* implicit */int) (unsigned char)185))));
                    arr_13 [i_0] [i_0] [6U] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(min((-5657573045938065621LL), (((/* implicit */long long int) arr_9 [22ULL] [i_0] [i_1] [22ULL] [i_2 + 1]))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) (short)-21480)) ^ (((/* implicit */int) (_Bool)1))))), (-5657573045938065625LL)))) : (var_3)));
                    var_17 = ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (max((((/* implicit */unsigned long long int) 4274061497365048745LL)), (4501400604114944ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((arr_3 [i_0]), (((/* implicit */unsigned int) (short)2228))))) | (139611588448485376LL)))));
                }
                var_18 = ((/* implicit */short) (-(((((/* implicit */_Bool) (signed char)55)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)108))) : (arr_2 [i_0] [i_1])))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        arr_16 [i_5] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((arr_5 [i_5] [i_5] [i_5]) & (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_5])))))), (var_5)));
        arr_17 [i_5] = ((/* implicit */short) min((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), (min((var_8), (((/* implicit */unsigned int) arr_15 [i_5]))))));
        var_19 = ((/* implicit */unsigned int) (unsigned char)255);
        var_20 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_9 [(short)10] [i_5] [i_5] [i_5] [i_5])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_5] [i_5]))))) : (((/* implicit */int) (!(((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)-32758)))))))));
    }
    /* vectorizable */
    for (unsigned int i_6 = 1; i_6 < 8; i_6 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [2ULL] [i_6 + 1] [i_6 + 1] [(unsigned char)22] [20ULL] [i_6])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [16LL] [i_6] [i_6 + 1] [16LL] [i_6] [i_6 + 1])))));
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            for (unsigned short i_8 = 0; i_8 < 10; i_8 += 2) 
            {
                {
                    arr_25 [i_6 + 1] [i_7] [i_6 + 1] |= ((/* implicit */unsigned short) arr_1 [i_8]);
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)252)) || (((/* implicit */_Bool) (unsigned char)61))));
                }
            } 
        } 
    }
    for (unsigned int i_9 = 1; i_9 < 8; i_9 += 1) /* same iter space */
    {
        var_23 ^= min((((/* implicit */unsigned int) (((!((_Bool)1))) && ((!(((/* implicit */_Bool) (short)-11046))))))), ((-(arr_14 [i_9]))));
        var_24 += ((/* implicit */signed char) arr_7 [(signed char)4] [i_9 + 1]);
    }
}
