/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83496
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
    var_17 = ((/* implicit */unsigned short) var_2);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_18 += ((/* implicit */short) max((-880845260), (((/* implicit */int) (unsigned char)15))));
                                arr_12 [(short)11] [i_0] [i_1] [(short)11] [i_1] [i_4] = ((/* implicit */int) arr_3 [(signed char)13] [(signed char)13] [(signed char)13]);
                                arr_13 [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))))) * (((/* implicit */int) arr_1 [i_0 - 1]))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0] [i_1] [(unsigned short)16] [16U]))))) ? (1278069233U) : (min((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_3 [i_0] [i_2] [i_0])))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(short)8] [i_1 - 1])))));
                                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((long long int) (+(((/* implicit */int) arr_9 [i_0] [i_0] [i_0 - 1] [i_1 + 2] [i_2 + 1]))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7660131123867887550LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 1] [i_2 - 1] [i_2]))) : (max((-4065297553343950691LL), (((/* implicit */long long int) var_15))))));
                    var_21 = ((/* implicit */_Bool) (~(9223372036854775807LL)));
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (-((-(((/* implicit */int) (!((_Bool)1)))))))))));
                }
            } 
        } 
    } 
    var_23 -= ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((signed char) var_9))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_16))))));
}
