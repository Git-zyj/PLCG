/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62142
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
    var_19 *= ((/* implicit */_Bool) (-(((/* implicit */int) var_7))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_20 = ((/* implicit */_Bool) max((((((/* implicit */int) arr_0 [i_0 + 1] [i_0])) * (((/* implicit */int) arr_1 [i_0])))), ((~(((((/* implicit */int) (short)31)) + (((/* implicit */int) (short)15423))))))));
        var_21 &= ((/* implicit */_Bool) (short)-15411);
        var_22 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) max(((short)-1), (arr_1 [i_0])))) : (((/* implicit */int) ((_Bool) arr_2 [i_0]))))) & ((~((~(((/* implicit */int) arr_2 [i_0]))))))));
        var_23 = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
    }
}
