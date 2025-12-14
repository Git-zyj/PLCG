/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95783
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
    var_15 = var_6;
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                arr_7 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1])) / (((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1]))));
                var_16 = var_2;
            }
            var_17 = ((_Bool) arr_3 [i_0]);
            var_18 ^= var_12;
            arr_8 [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1] [i_1] [i_0]))));
            var_19 += ((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_1]))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_11 [i_3] [i_0] = ((((/* implicit */int) ((_Bool) arr_6 [i_3] [i_3] [i_3]))) > (((/* implicit */int) arr_0 [i_0])));
            arr_12 [i_0] &= ((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_3] [i_0] [i_0])) - (((/* implicit */int) (_Bool)1))));
        }
        arr_13 [i_0] [i_0] = arr_2 [i_0] [i_0];
        var_20 -= ((((/* implicit */int) arr_3 [i_0])) >= (((/* implicit */int) ((var_14) || (arr_10 [i_0])))));
        arr_14 [i_0] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3))));
        var_21 = ((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_4))));
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        var_22 *= ((/* implicit */_Bool) ((((arr_4 [i_4 - 1] [i_4] [i_4 - 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((arr_1 [i_4] [i_4]), (arr_1 [i_4] [i_4])))))) ^ ((~(((/* implicit */int) min(((_Bool)0), (arr_1 [i_4] [i_4 - 1]))))))));
        arr_18 [i_4] = ((_Bool) ((((/* implicit */int) arr_0 [i_4 - 1])) << (((/* implicit */int) var_11))));
    }
    var_23 = ((/* implicit */_Bool) min((var_23), (var_5)));
    var_24 = ((((/* implicit */int) var_7)) <= (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_10)))))));
}
