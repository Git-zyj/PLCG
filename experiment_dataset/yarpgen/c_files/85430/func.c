/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85430
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))))))));
        arr_4 [i_0] = arr_1 [i_0];
    }
    /* LoopSeq 1 */
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_5 [i_1] [(unsigned short)4])))))), ((+(((/* implicit */int) ((unsigned short) var_6))))))))));
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) max((((((/* implicit */int) max((arr_3 [i_1]), (var_13)))) - (((((/* implicit */int) (unsigned short)32112)) - (((/* implicit */int) var_3)))))), (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_1 [i_1])))))))))));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 3; i_2 < 11; i_2 += 3) 
        {
            var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) arr_9 [i_2 - 1])) > (((/* implicit */int) arr_9 [i_2 + 2])))))));
            var_18 = arr_2 [(unsigned short)13] [i_2 + 2];
            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) max((max((((/* implicit */int) max(((unsigned short)16323), ((unsigned short)59371)))), (((((/* implicit */int) var_6)) >> (((((/* implicit */int) arr_3 [(unsigned short)3])) - (1037))))))), ((~(((/* implicit */int) var_3)))))))));
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_3 [i_2 - 2]))) + (((/* implicit */int) var_9)))))));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65509)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (unsigned short)14360))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 1; i_3 < 13; i_3 += 4) 
        {
            var_22 ^= (unsigned short)14360;
            var_23 ^= ((unsigned short) arr_2 [i_3 + 1] [i_3 - 1]);
        }
        var_24 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_5 [i_1] [i_1]))));
        arr_13 [i_1] [i_1] = var_6;
    }
}
