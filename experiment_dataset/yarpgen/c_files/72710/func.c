/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72710
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
    var_12 *= ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))))))) == (max((((/* implicit */unsigned int) (signed char)74)), (3813634841U))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        arr_2 [(unsigned char)14] = (~((~(((/* implicit */int) var_4)))));
        var_13 = ((((/* implicit */_Bool) arr_0 [i_0 + 3] [i_0 + 3])) ? (((/* implicit */int) arr_0 [i_0 + 3] [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 + 3] [i_0 + 1])));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    var_14 -= ((/* implicit */int) ((((/* implicit */_Bool) (-(3813634818U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : ((-(((((/* implicit */_Bool) (short)19513)) ? (8400109593209132762ULL) : (10046634480500418853ULL)))))));
                    var_15 *= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) arr_6 [i_3 - 1])) > (((/* implicit */int) arr_0 [i_3 - 1] [i_3 - 1])))))));
                    arr_12 [i_1] [i_1] [6ULL] = ((/* implicit */unsigned int) var_2);
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) var_8))));
                }
            } 
        } 
        var_17 = ((/* implicit */long long int) var_5);
    }
}
