/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89951
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
    var_15 = ((/* implicit */short) var_3);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_16 = min((((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) var_4)))), ((~(((/* implicit */int) arr_0 [i_0])))));
        var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_12))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_18 ^= ((/* implicit */signed char) (!(arr_0 [i_1])));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            var_19 += ((/* implicit */unsigned int) var_14);
            arr_8 [i_1] [i_1] [i_2] = ((/* implicit */short) arr_1 [i_2]);
        }
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_1])) || (((/* implicit */_Bool) var_8))));
        arr_9 [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) ((short) var_2))) : (arr_5 [i_1] [i_1])));
    }
}
