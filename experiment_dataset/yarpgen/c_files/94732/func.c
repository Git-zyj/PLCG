/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94732
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
    var_13 = ((((/* implicit */_Bool) var_10)) ? (((max((var_7), (((/* implicit */unsigned long long int) (short)-9920)))) - (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) (+(var_6)))));
    var_14 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) 323505539074642679ULL)))))), (((((/* implicit */unsigned long long int) ((var_10) & (((/* implicit */int) var_4))))) | (max((18123238534634908936ULL), (((/* implicit */unsigned long long int) 1222178213U))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_15 ^= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((signed char) (_Bool)1))), (min((1714033600402867497LL), (((/* implicit */long long int) arr_1 [i_0 - 1] [i_0 + 1]))))));
                var_16 += ((/* implicit */unsigned int) 18123238534634908936ULL);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_2 = 4; i_2 < 13; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) arr_4 [i_4]);
                    arr_10 [i_4] [i_2] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        arr_11 [(short)6] [(unsigned short)12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_6 [i_2] [i_2] [i_2 - 3])), ((unsigned char)5)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_2] [i_2] [i_2]))))) : (var_7)))) ? (max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (18123238534634908936ULL))) : (((/* implicit */unsigned long long int) max((-1436141730), ((~(var_10))))))));
        arr_12 [i_2] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) ((short) var_8))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_2 - 3] [i_2])))))) : (531618017092288369ULL)))));
        arr_13 [2ULL] = ((/* implicit */unsigned long long int) (unsigned char)253);
        var_18 = ((/* implicit */signed char) var_7);
    }
    for (unsigned long long int i_5 = 1; i_5 < 6; i_5 += 1) 
    {
        arr_16 [i_5] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) 4086308958U))))), (arr_15 [i_5]))))));
        var_19 += ((/* implicit */int) ((((/* implicit */_Bool) ((var_3) - (arr_7 [i_5] [i_5 + 1] [i_5 + 4])))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_7 [10LL] [i_5 + 4] [10LL]))) : (((((/* implicit */unsigned long long int) 2129603966)) ^ (arr_7 [(unsigned short)6] [i_5 + 1] [i_5])))));
    }
}
