/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72842
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
    var_16 &= ((unsigned int) var_13);
    var_17 = (-(2477820813U));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = arr_2 [i_0];
        var_18 = (((~(3037647807U))) << (((((unsigned int) ((3121534426U) % (2820007259U)))) - (301527144U))));
    }
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            var_19 = max((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))) & (var_11))), (((((/* implicit */_Bool) var_8)) ? (3612947056U) : ((+(2782006948U))))));
            var_20 = ((unsigned int) 3766551764U);
            var_21 = ((/* implicit */unsigned int) max((var_21), (3745224191U)));
        }
        arr_10 [i_1] [i_1] = 0U;
        var_22 = 4294967295U;
        arr_11 [i_1] = var_6;
        arr_12 [i_1] = ((unsigned int) 4294967289U);
    }
    var_23 = ((unsigned int) (+(((((/* implicit */_Bool) var_0)) ? (1474960036U) : (1298369882U)))));
    var_24 = var_3;
}
