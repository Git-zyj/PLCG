/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64412
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) & (var_5)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)65516)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((unsigned short) arr_0 [i_0] [i_0])))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-39))) : (var_11)))) ? ((-(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) var_0))))));
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */int) (unsigned short)9360)) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((arr_0 [i_0] [i_0]) ? (((/* implicit */int) ((signed char) var_3))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (signed char)3))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        arr_4 [i_1] |= ((/* implicit */unsigned short) ((((_Bool) ((var_0) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1]))) : (max((14U), (((/* implicit */unsigned int) var_2))))));
        arr_5 [i_1] [i_1] = ((/* implicit */_Bool) var_9);
    }
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) var_4))));
}
