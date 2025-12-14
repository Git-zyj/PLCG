/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83234
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_20 ^= ((/* implicit */_Bool) var_14);
            arr_6 [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_3 [i_0] [i_1]))));
            var_21 = ((/* implicit */_Bool) var_4);
            arr_7 [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_1] [i_1])) <= (arr_4 [i_0] [i_0] [i_0])));
            arr_8 [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0])) < (((/* implicit */int) arr_3 [i_0] [10LL]))));
        }
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) -567030302)) && (((/* implicit */_Bool) 501841295))));
    }
    var_23 = ((/* implicit */long long int) var_12);
    var_24 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((max((1807643795), (((/* implicit */int) (short)-23355)))) / (((((/* implicit */_Bool) (short)-23355)) ? (((/* implicit */int) (short)23346)) : (((/* implicit */int) var_5))))))), (max((((/* implicit */unsigned int) var_8)), (max((((/* implicit */unsigned int) var_12)), (var_7)))))));
    var_25 = var_8;
}
