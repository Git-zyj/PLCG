/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62391
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
    var_18 = var_5;
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) max((max((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1 - 1] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_12)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))), (((/* implicit */int) ((short) min((arr_5 [i_0] [i_0] [i_2]), (arr_3 [i_0])))))));
                    var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_2])) ? (min((((/* implicit */int) arr_7 [i_0] [i_1 + 2] [i_2])), ((~(((/* implicit */int) var_1)))))) : (((/* implicit */int) max((var_11), (((short) arr_4 [i_2])))))));
                    var_20 = min(((short)-25163), ((short)11341));
                    arr_9 [i_0] [i_0] = ((/* implicit */short) min((max(((~(((/* implicit */int) (short)6144)))), (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))), (((((/* implicit */_Bool) max((arr_2 [i_0] [i_1] [i_2]), (var_15)))) ? (((/* implicit */int) max((var_15), (arr_3 [i_0])))) : (((/* implicit */int) arr_2 [i_1 - 2] [i_2] [i_2]))))));
                }
            } 
        } 
    } 
}
