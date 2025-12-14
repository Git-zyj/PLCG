/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93115
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) var_13))) << (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))) - (6164)))))) : ((-(2558789430196972202ULL)))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_0 [i_0 + 1])), (arr_6 [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0 - 2])))) ? (min((arr_1 [i_2]), (arr_1 [i_1]))) : ((+(arr_5 [i_1 - 1] [i_0] [i_0 + 1]))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_12 [i_1] [i_3 - 2] [i_2] [i_1] [i_1] = ((/* implicit */int) arr_4 [i_3]);
                                arr_13 [i_0] [i_1] [(short)8] [i_0 - 2] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_3 [i_1 + 1])) << (((/* implicit */int) arr_7 [i_1 - 1] [i_4] [i_0 - 1] [i_3]))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_1))) % (((((var_11) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_7 [i_0] [(short)14] [i_2] [i_2])))) - (((/* implicit */int) arr_10 [i_1 - 1] [i_1] [i_2]))))));
                    arr_14 [i_0] [i_1] [i_0] = ((/* implicit */short) (-(((arr_5 [i_0 + 1] [i_0 - 2] [i_0 + 1]) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0 + 1] [i_1] [i_2])) ? (((/* implicit */int) arr_7 [i_2] [i_2] [i_1] [i_0 - 2])) : (((/* implicit */int) (short)22436)))))))));
                }
            } 
        } 
    } 
}
