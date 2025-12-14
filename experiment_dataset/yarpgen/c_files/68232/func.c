/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68232
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
    var_15 = var_9;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) min(((-(((/* implicit */int) var_8)))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_0])))))))))))));
        var_17 = ((/* implicit */signed char) (-(((((/* implicit */int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) / (((/* implicit */int) arr_2 [i_0] [i_0]))))));
    }
    /* LoopNest 3 */
    for (short i_1 = 1; i_1 < 18; i_1 += 1) 
    {
        for (int i_2 = 4; i_2 < 16; i_2 += 1) 
        {
            for (unsigned int i_3 = 1; i_3 < 16; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                        {
                            {
                                arr_16 [i_1] [i_2] [i_3 - 1] [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_7 [i_2 + 1] [i_4] [i_4]), (arr_7 [i_2 + 1] [i_5] [i_5])))) ? (max((arr_7 [i_2 + 1] [i_2 + 1] [i_5]), (arr_7 [i_2 + 1] [i_2 + 1] [i_2 - 2]))) : (arr_7 [i_2 + 1] [i_3 + 3] [i_3])));
                                var_18 = ((/* implicit */short) ((_Bool) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_15 [(unsigned short)5] [i_1] [i_2] [i_3] [i_4] [i_4] [i_5])) : (var_9))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_13 [i_1]), (((/* implicit */short) var_3)))))))));
                            }
                        } 
                    } 
                    arr_17 [i_3] = ((/* implicit */unsigned long long int) (short)255);
                    arr_18 [i_1] [i_1] [(short)2] [i_1 + 1] |= ((/* implicit */int) var_11);
                }
            } 
        } 
    } 
}
