/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66483
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0])))))));
        var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) var_7))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned short) var_14)), (var_5))))));
            var_20 = ((/* implicit */signed char) arr_2 [(_Bool)1] [(signed char)1]);
            var_21 += ((/* implicit */_Bool) var_8);
        }
        /* vectorizable */
        for (unsigned int i_2 = 1; i_2 < 18; i_2 += 2) 
        {
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_2 + 4] [i_2 - 1])) > (((/* implicit */int) arr_3 [i_0] [i_2]))));
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                arr_11 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned int) var_4);
                var_23 = arr_3 [(_Bool)1] [i_2];
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_17 [i_0] [i_2] [i_4] [i_5] [i_0] [i_2] = ((/* implicit */unsigned int) var_1);
                    arr_18 [i_0] [i_0] [16U] = ((/* implicit */signed char) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))) > (((/* implicit */int) arr_12 [i_0]))));
                }
                var_24 = ((/* implicit */signed char) arr_9 [(_Bool)0] [i_2 + 1]);
                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2 + 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_14))));
                var_26 &= ((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) var_3)))));
            }
        }
        for (unsigned short i_6 = 2; i_6 < 21; i_6 += 1) 
        {
            arr_22 [i_6] [i_6 - 1] = ((/* implicit */_Bool) max((((unsigned int) var_11)), (((/* implicit */unsigned int) arr_13 [i_0] [i_6] [i_6]))));
            arr_23 [i_0] [i_6] [(_Bool)1] &= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_2)) < (((((/* implicit */int) arr_21 [i_0] [i_0] [i_0])) ^ (((/* implicit */int) var_13)))))))));
            arr_24 [i_6] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        }
    }
    var_27 += ((/* implicit */unsigned int) (+(max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_13))))));
}
