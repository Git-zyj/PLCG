/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86684
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
    var_15 = 2992130121U;
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        arr_3 [(signed char)2] [(signed char)2] &= (+(max((var_7), (((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 2])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
        var_16 = ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [i_0 - 3]), (arr_1 [i_0 - 1]))))) & ((+(max((4294967293U), (1302837174U))))));
        arr_4 [i_0] = var_11;
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_17 = ((/* implicit */signed char) 4294967295U);
        var_18 -= ((((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (max((arr_5 [i_1] [i_1]), (3778981198U))))) - ((-(2992130122U))));
        var_19 = arr_5 [i_1] [i_1];
        var_20 = ((/* implicit */unsigned int) max((var_20), (((((/* implicit */_Bool) 2501358437U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))) : (1793608859U)))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) min((var_21), (4294967295U)));
        var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_2]))));
        arr_9 [i_2] = ((/* implicit */signed char) arr_5 [i_2] [i_2]);
    }
    var_23 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_5)))) || (((/* implicit */_Bool) (signed char)-78))));
    var_24 = var_11;
    var_25 = min((((/* implicit */unsigned int) ((4294967277U) < (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-115))) / (var_10)))))), (((((/* implicit */_Bool) ((signed char) var_12))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2992130109U))));
}
