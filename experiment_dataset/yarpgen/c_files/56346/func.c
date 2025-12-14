/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56346
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
    var_17 = ((/* implicit */_Bool) var_3);
    var_18 = ((/* implicit */short) (+(((/* implicit */int) max((var_8), (max((var_15), (((/* implicit */unsigned short) var_11)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) arr_2 [i_0]))), ((((_Bool)1) ? (((/* implicit */int) (unsigned short)17790)) : (((/* implicit */int) (short)-27471))))));
        var_19 = ((/* implicit */unsigned short) var_7);
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) <= (((/* implicit */int) arr_2 [i_0]))))) >= (((/* implicit */int) max(((short)13099), ((short)-13100)))))))));
        var_21 = ((/* implicit */_Bool) ((unsigned int) (~((~(((/* implicit */int) arr_1 [i_0] [i_0])))))));
    }
}
