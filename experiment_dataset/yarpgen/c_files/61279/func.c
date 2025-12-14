/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61279
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0 - 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), (var_12))))) : (arr_1 [i_0 - 1])));
        var_16 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0]))))), (((arr_2 [i_0 - 1] [i_0 - 1]) - (arr_2 [i_0 - 1] [i_0 - 1])))));
        var_17 ^= ((/* implicit */long long int) arr_1 [i_0]);
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) arr_1 [i_0 - 1]))));
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                {
                    var_19 = ((/* implicit */_Bool) -2854176000296727326LL);
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                        {
                            {
                                arr_16 [i_1] [i_2] [i_3] [i_3] [i_4] [i_5] = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) var_11)), (arr_1 [i_2])))));
                                arr_17 [i_5] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */long long int) ((((((arr_11 [i_1] [i_3] [i_4]) + (9223372036854775807LL))) << (((((/* implicit */int) var_5)) - (230))))) > (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))));
    }
    var_21 = ((((((/* implicit */_Bool) var_5)) || (var_7))) ? (((2854176000296727326LL) | (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_9))) > (((/* implicit */int) var_2)))))));
    var_22 = ((/* implicit */signed char) min((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) ^ (2854176000296727326LL)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))))));
    var_23 = ((/* implicit */_Bool) ((((((/* implicit */int) var_10)) - (((/* implicit */int) var_6)))) * (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) >> (((((/* implicit */int) var_2)) - (74)))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_1)))))))));
}
