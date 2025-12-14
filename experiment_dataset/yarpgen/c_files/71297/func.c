/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71297
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
    for (unsigned long long int i_0 = 2; i_0 < 7; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_0)))) ? ((~(306901073U))) : (max((var_2), (((/* implicit */unsigned int) var_16))))))) | (((((/* implicit */_Bool) (short)-2)) ? (((/* implicit */unsigned long long int) var_1)) : (13573217449832088069ULL)))));
            arr_5 [i_0] [i_0] = ((/* implicit */short) (((-(((/* implicit */int) ((short) arr_2 [i_0 + 3] [i_0 + 3] [i_1]))))) / (((/* implicit */int) ((unsigned short) var_15)))));
        }
        var_20 *= ((/* implicit */short) (-(((((/* implicit */int) var_18)) & (((/* implicit */int) var_17))))));
        var_21 = ((/* implicit */_Bool) var_17);
        arr_6 [i_0 - 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 22U))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 2; i_2 < 7; i_2 += 2) /* same iter space */
    {
        var_22 += ((/* implicit */unsigned short) 2216913110U);
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((arr_4 [i_2 - 1]) - (arr_4 [i_2 + 1]))))));
    }
    /* LoopNest 3 */
    for (short i_3 = 2; i_3 < 11; i_3 += 2) 
    {
        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            for (short i_5 = 2; i_5 < 14; i_5 += 2) 
            {
                {
                    var_24 = ((/* implicit */_Bool) (((+(((((/* implicit */int) var_18)) - (((/* implicit */int) var_3)))))) * (((/* implicit */int) ((unsigned short) ((var_9) & (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)45469)))) ? (((((/* implicit */int) arr_16 [i_3 + 2])) & (((/* implicit */int) arr_16 [i_3 + 4])))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_16 [i_3 + 3]))))));
                        var_26 = ((/* implicit */unsigned short) min(((((~(var_0))) >> (((var_9) - (4273375184U))))), ((((+(arr_11 [i_3 + 1]))) - (((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
                        arr_21 [i_3] [i_4] [i_6] |= ((/* implicit */signed char) (~(((/* implicit */int) (short)-30722))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        arr_24 [i_4] [i_4] [i_4] [i_4] [i_3] [i_4] &= ((/* implicit */unsigned int) (((-(var_14))) << (((((/* implicit */int) var_5)) + (13731)))));
                        var_27 = ((/* implicit */unsigned short) ((unsigned int) (+(4294967294U))));
                    }
                }
            } 
        } 
    } 
}
