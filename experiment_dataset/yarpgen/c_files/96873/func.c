/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96873
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
    for (int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_12 += (+(((unsigned int) (+(var_9)))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */int) var_10);
                                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 4294967295U))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_1] [i_2] [(_Bool)1] [10])) || (((/* implicit */_Bool) 0U))))), (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0 - 1])) ? (arr_12 [1U] [i_3] [i_2] [11] [11] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))) : (min((min((2U), (1U))), (((/* implicit */unsigned int) ((int) 1903169418U))))))))));
                                arr_15 [i_0 - 2] [i_4] [i_2] [i_3] [i_0] = ((/* implicit */int) ((8U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 21; i_5 += 4) 
    {
        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) 
            {
                {
                    var_15 ^= ((/* implicit */_Bool) (-(min((((/* implicit */int) arr_17 [i_5 - 2])), (arr_16 [i_5 - 2])))));
                    arr_23 [i_5 - 2] [i_6] [i_6] = 15U;
                    arr_24 [16] [i_6] [(_Bool)1] &= ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) 79425526U)) ? (4294967290U) : (((/* implicit */unsigned int) 1341197107)))), (((/* implicit */unsigned int) ((_Bool) (_Bool)1))))) / (max((((/* implicit */unsigned int) (~(var_1)))), (((((/* implicit */_Bool) arr_18 [i_5] [i_5] [i_5])) ? (arr_19 [6]) : (arr_18 [i_6] [i_6] [i_7])))))));
                }
            } 
        } 
    } 
}
