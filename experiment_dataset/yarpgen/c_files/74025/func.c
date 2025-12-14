/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74025
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (long long int i_4 = 3; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_14 [i_1] [i_1] |= ((/* implicit */unsigned short) ((arr_13 [i_0 - 1] [i_1] [i_4 + 1]) && (((/* implicit */_Bool) min((((/* implicit */long long int) ((arr_5 [i_0]) && (((/* implicit */_Bool) var_10))))), (min((-5809230919469920315LL), (9050067542017107337LL))))))));
                                var_15 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))), (((((708433961010197527ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_3]))))) - (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned int) arr_9 [i_0] [i_1])))))))));
                            }
                        } 
                    } 
                    var_16 = ((unsigned long long int) min(((_Bool)1), ((_Bool)1)));
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        arr_17 [i_5] [i_5] [i_5] [i_2] [i_5] [i_5] = ((unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_13))) - (var_10))) - (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_5 [i_0 - 1]))))));
                        arr_18 [i_2] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */_Bool) var_9);
                        var_17 |= ((/* implicit */int) (-(max((((/* implicit */unsigned int) var_7)), (var_10)))));
                        arr_19 [i_1] &= ((/* implicit */unsigned char) (_Bool)1);
                    }
                    /* vectorizable */
                    for (long long int i_6 = 1; i_6 < 13; i_6 += 1) 
                    {
                        var_18 = ((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0 + 2] [i_1]))));
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (+(((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 + 2] [i_1] [i_1]))))))))));
                        arr_22 [i_0] [i_2] [i_2] [i_6] = ((/* implicit */int) ((var_12) ? (((/* implicit */unsigned long long int) ((arr_3 [i_6] [i_2]) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31658)))))) : (708433961010197531ULL)));
                        arr_23 [i_2] = ((/* implicit */unsigned int) ((((_Bool) 9223372036854775807LL)) || (((/* implicit */_Bool) (short)-10295))));
                    }
                    var_20 = ((/* implicit */unsigned char) (!((((!((_Bool)1))) || (((/* implicit */_Bool) arr_15 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 1]))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_14))));
}
