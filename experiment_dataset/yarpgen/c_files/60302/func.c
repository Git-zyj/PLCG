/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60302
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((max((((/* implicit */int) var_7)), (-1312928123))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1312928122))))) : (((((/* implicit */_Bool) var_17)) ? (1312928123) : (((/* implicit */int) var_14))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) -527820631);
        var_21 -= ((/* implicit */_Bool) min((((/* implicit */unsigned int) -190047291)), ((~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (var_0)))))));
    }
    var_22 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_7)) & (((int) (short)-17625)))) << (((((((/* implicit */_Bool) ((var_6) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) var_14)) : (max((var_13), (((/* implicit */int) var_2)))))) - (30141)))));
}
