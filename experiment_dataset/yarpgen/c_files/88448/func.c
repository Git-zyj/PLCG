/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88448
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_10 [i_2] = ((/* implicit */short) arr_3 [i_0]);
                    var_17 = ((/* implicit */_Bool) arr_8 [(_Bool)0] [i_1] [i_2] [i_2]);
                }
            } 
        } 
    } 
    var_18 ^= ((/* implicit */short) var_11);
    /* LoopSeq 1 */
    for (signed char i_3 = 1; i_3 < 22; i_3 += 4) 
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (signed char)32)) - (2)))));
        arr_14 [i_3 + 1] = ((/* implicit */short) arr_13 [i_3] [i_3]);
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_12 [i_3 + 1])), (arr_11 [(short)17] [(signed char)1]))))));
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) arr_13 [i_3] [i_3]))));
        arr_15 [4] [i_3] = ((/* implicit */_Bool) arr_11 [i_3] [19U]);
    }
}
