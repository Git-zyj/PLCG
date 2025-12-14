/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85298
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) (signed char)41)) - (((((/* implicit */int) (signed char)41)) << (((1905589875U) - (1905589874U))))))))));
        arr_4 [i_0] = ((/* implicit */signed char) (unsigned short)0);
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            arr_8 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)38375)) ? (2389377421U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-42)))));
            var_18 = ((/* implicit */signed char) (unsigned short)56834);
        }
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            var_19 = ((/* implicit */unsigned short) max((var_19), (((unsigned short) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) (signed char)46)) : (((/* implicit */int) (signed char)95)))))));
            arr_12 [i_2] = ((/* implicit */unsigned short) arr_1 [i_0]);
        }
        var_20 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0])) + ((-(((/* implicit */int) var_16))))));
        arr_13 [i_0] = ((/* implicit */unsigned int) arr_3 [i_0]);
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        var_21 += ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)8191))));
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_11 [18U] [i_3] [18U]))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13)))))));
    }
    var_23 = ((/* implicit */unsigned int) min((var_23), ((+(var_14)))));
}
