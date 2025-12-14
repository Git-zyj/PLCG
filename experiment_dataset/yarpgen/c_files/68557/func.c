/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68557
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_1 [2U] [i_0]);
        arr_4 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_0] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_6 [i_0]))));
            var_16 = ((/* implicit */unsigned long long int) arr_5 [i_0 + 1] [(_Bool)1]);
            arr_8 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (_Bool)1))));
            var_17 = ((((/* implicit */int) var_12)) < (((arr_2 [i_0]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [i_0])))));
            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) (_Bool)0)))))))));
        }
    }
    var_19 += ((/* implicit */unsigned int) var_15);
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_13))) : (min((4184523517U), (((/* implicit */unsigned int) var_14))))))))))));
}
