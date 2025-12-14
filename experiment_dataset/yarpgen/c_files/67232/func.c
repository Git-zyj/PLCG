/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67232
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
    var_12 = (~(max((((/* implicit */unsigned long long int) (_Bool)1)), (((unsigned long long int) var_10)))));
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7209)) ? (((/* implicit */int) var_11)) : (var_2)))) ? (min((((/* implicit */int) (_Bool)1)), (var_2))) : (var_9)))) ? (((/* implicit */long long int) (-((-(((/* implicit */int) (_Bool)1))))))) : (8226799457709161675LL))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 15; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) (_Bool)1);
        var_14 *= ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 - 1])) - (((/* implicit */int) arr_0 [i_0 - 3]))));
        arr_3 [i_0 + 3] [(_Bool)1] = ((/* implicit */unsigned long long int) var_5);
    }
    for (long long int i_1 = 3; i_1 < 15; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */long long int) var_11);
        var_15 = ((/* implicit */_Bool) arr_5 [i_1]);
        arr_7 [i_1] &= ((/* implicit */long long int) arr_0 [i_1]);
        var_16 = arr_0 [i_1 - 1];
    }
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        var_17 += ((max((arr_10 [i_2]), (max((var_6), (((/* implicit */long long int) var_3)))))) / (((long long int) min((arr_8 [i_2] [i_2]), (((/* implicit */int) arr_9 [8]))))));
        arr_11 [i_2] = ((/* implicit */_Bool) var_6);
    }
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                {
                    var_18 = ((((((/* implicit */_Bool) min((arr_0 [7LL]), (var_3)))) ? (min((var_4), (var_7))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) / (((/* implicit */long long int) ((/* implicit */int) var_3))));
                    arr_18 [i_4] [i_4] [i_4] &= arr_15 [i_3] [i_4] [i_4];
                    arr_19 [i_3] [i_3] [i_4] [(short)11] |= ((/* implicit */_Bool) ((long long int) ((max((((/* implicit */long long int) var_0)), (var_6))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */int) arr_16 [5] [5] [i_4] [13LL])) : (((/* implicit */int) arr_4 [i_5]))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 12; i_6 += 3) 
                    {
                        for (long long int i_7 = 1; i_7 < 11; i_7 += 3) 
                        {
                            {
                                var_19 |= ((/* implicit */unsigned short) min((var_6), (var_4)));
                                var_20 -= ((/* implicit */unsigned short) arr_8 [i_3] [i_3]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) var_9);
}
