/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93548
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
    var_17 = ((/* implicit */unsigned short) min((var_17), (var_0)));
    var_18 = ((/* implicit */unsigned short) max((((((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (unsigned short)15608))))) - (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)39774))))))), (min((((((/* implicit */int) var_12)) >> (((((/* implicit */int) var_8)) - (37684))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)15602))))))));
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max(((unsigned short)49928), (var_16))), ((unsigned short)36123)))) ? ((-(((/* implicit */int) (unsigned short)13)))) : (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (unsigned short)36369)) ? (((/* implicit */int) (unsigned short)37507)) : (((/* implicit */int) (unsigned short)29989)))) : (((((/* implicit */int) (unsigned short)4857)) / (((/* implicit */int) var_4)))))))))));
    var_20 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)58601)) : (((/* implicit */int) (unsigned short)15602))))) ? (((/* implicit */int) min(((unsigned short)20577), ((unsigned short)58601)))) : (((/* implicit */int) var_5)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [(unsigned short)1])) * (((((/* implicit */int) min(((unsigned short)58521), ((unsigned short)54815)))) / (((/* implicit */int) (unsigned short)55211))))));
        var_22 |= arr_0 [(unsigned short)2] [i_0];
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned short)15535)))) / (((/* implicit */int) (unsigned short)7741))));
        arr_8 [i_1] = var_10;
        arr_9 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)10324)) != (((/* implicit */int) arr_1 [i_1]))));
        var_23 |= arr_1 [i_1];
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)60129)))))));
    }
}
