/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55363
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            arr_5 [i_1] [(_Bool)1] [i_1 - 1] = ((/* implicit */unsigned short) arr_0 [i_1 + 1] [i_1 + 1]);
            var_20 = ((/* implicit */long long int) var_14);
            var_21 = ((/* implicit */signed char) (+(((/* implicit */int) var_2))));
        }
        arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0])) << (((/* implicit */int) arr_2 [i_0]))));
        var_22 = ((/* implicit */_Bool) min((var_22), (arr_4 [i_0] [i_0] [i_0])));
        arr_7 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
    }
    for (short i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        arr_10 [i_2] [i_2] = var_15;
        arr_11 [i_2] = arr_0 [i_2] [i_2];
    }
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        arr_16 [i_3] = (~(max((((/* implicit */long long int) var_8)), (650935983625966980LL))));
        var_23 = ((((/* implicit */_Bool) 262143U)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)7)) ? (262136U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)29445)))))));
    }
    var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
    var_25 = ((/* implicit */short) (-(((/* implicit */int) var_18))));
}
