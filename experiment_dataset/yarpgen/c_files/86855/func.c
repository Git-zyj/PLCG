/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86855
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
    var_11 &= ((/* implicit */_Bool) (-(((/* implicit */int) var_9))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_6 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (((_Bool)0) ? (252472659) : (524286)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 2])))) ^ (((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) 852359349)) ? (((/* implicit */int) (short)7)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)6214)), (var_7))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0 - 1] [(short)18] [2] [(short)14] [i_3] [i_0 + 2] [i_0 + 2] = ((/* implicit */_Bool) var_7);
                                arr_15 [i_0 - 1] [i_0] [i_0] [i_3] [i_0] = min(((-(((/* implicit */int) arr_11 [i_4] [i_1] [i_2] [i_3] [i_0 + 1])))), (((/* implicit */int) min((arr_3 [(short)0] [i_1]), (arr_3 [(short)1] [(short)10])))));
                                var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) arr_9 [i_0 + 1] [i_1] [5] [20]))));
                                arr_16 [i_3] = (short)28885;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) var_7);
}
