/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68871
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
    var_12 = ((/* implicit */short) max((((/* implicit */int) (short)-15125)), ((-(((/* implicit */int) var_5))))));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)-20268), ((short)20204)))) ? (((((/* implicit */int) (short)-20284)) + (((/* implicit */int) (short)-26658)))) : (((((/* implicit */int) (short)16320)) * (((/* implicit */int) (short)-20268)))))))));
        arr_5 [i_0] = (short)-22287;
        arr_6 [i_0] [i_0] = arr_3 [i_0];
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_13 = ((/* implicit */short) (~((~(((/* implicit */int) (short)23474))))));
        arr_9 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) && (((/* implicit */_Bool) arr_3 [i_1]))))) : (((((/* implicit */_Bool) (short)-7268)) ? (((/* implicit */int) (short)-4657)) : (((/* implicit */int) arr_3 [i_1]))))));
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_3 [i_1]))) ? (((/* implicit */int) (((+(((/* implicit */int) arr_3 [i_1])))) != (((/* implicit */int) (short)4096))))) : (((/* implicit */int) var_0))));
    }
}
