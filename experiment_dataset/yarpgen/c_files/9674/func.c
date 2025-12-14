/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9674
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
    var_13 = ((/* implicit */signed char) (_Bool)1);
    var_14 = ((/* implicit */_Bool) max((((/* implicit */signed char) var_11)), ((signed char)-38)));
    var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_11), (max((var_11), (var_11))))))) | (((var_11) ? (max((((/* implicit */unsigned int) var_9)), (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) var_11)), ((signed char)122)))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */int) ((signed char) (((-(((/* implicit */int) arr_1 [i_0])))) - ((+(arr_9 [i_4] [i_3] [i_2] [12]))))));
                                arr_14 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-40)) != (((/* implicit */int) (_Bool)1))));
                                arr_15 [i_0] &= ((/* implicit */int) ((unsigned short) min((var_10), (((/* implicit */unsigned int) var_7)))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((signed char) (!(arr_3 [i_1] [i_1 - 1])))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((~(arr_21 [i_6] [i_5] [3] [i_1] [i_1] [i_1] [i_0]))) & (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_19 [i_2]))))))) ? (((/* implicit */int) ((_Bool) arr_17 [i_0] [i_2 - 2] [i_0] [i_6]))) : (((((var_11) ? (((/* implicit */int) (short)11749)) : (((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_5] [i_6] [i_2])))) - (arr_4 [i_2] [i_2 - 2] [i_2 - 1]))))))));
                                var_18 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (short)11737)) : (1741675054)));
                                var_19 = ((/* implicit */int) ((signed char) max((var_7), ((!(var_11))))));
                                var_20 = max((((/* implicit */int) max((arr_17 [i_1 - 1] [i_2 + 1] [i_5 - 1] [i_0 + 2]), (((/* implicit */signed char) var_11))))), ((+(((/* implicit */int) arr_17 [i_1 - 1] [i_2 - 2] [i_5 - 1] [i_0 + 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
