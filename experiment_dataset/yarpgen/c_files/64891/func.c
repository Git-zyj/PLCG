/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64891
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
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0 - 1]);
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1])))))));
        var_15 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (short)20729))))) == (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_5))))));
        var_16 += ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_1 [i_1] [i_1]))));
        var_17 = ((/* implicit */long long int) ((_Bool) arr_0 [i_1]));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_18 = ((/* implicit */int) min((var_18), ((~(((/* implicit */int) (_Bool)1))))));
        arr_10 [i_2] = ((/* implicit */unsigned char) ((long long int) (~(((/* implicit */int) (short)-13481)))));
    }
    var_19 -= ((/* implicit */signed char) ((var_10) ? (((/* implicit */unsigned long long int) var_7)) : (((var_12) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
    var_20 = (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((signed char) (unsigned char)48))), (var_7)))));
}
