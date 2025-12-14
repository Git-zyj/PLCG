/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88826
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_17 *= ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) ((_Bool) var_8))), (min((var_1), (var_9))))), (((((/* implicit */_Bool) arr_1 [i_1])) ? (((2199911824U) / (var_12))) : (((2552832970U) / (var_16)))))));
                    var_18 = (!((_Bool)1));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) : (((unsigned int) arr_7 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (arr_1 [11U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [22U])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [(_Bool)1])))))) : (((unsigned int) (_Bool)0))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (+((-(((/* implicit */int) var_15)))))))));
                                var_21 -= var_8;
                                arr_13 [i_0] [i_0] [i_0] [i_2] [i_2] [i_0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_4]))) : ((((+(2830564357U))) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                                arr_14 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_12 [18U] [i_3] [i_1] [i_0]))) ? (2217958862U) : ((~(min((arr_1 [i_2]), (var_13)))))));
                                arr_15 [i_2] [i_2] = arr_5 [i_0] [i_0];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_6);
    var_23 = var_5;
}
