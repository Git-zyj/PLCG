/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95398
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
    var_17 = var_7;
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] |= ((/* implicit */_Bool) 32767LL);
        arr_4 [i_0] = var_8;
        arr_5 [i_0] [(short)2] = ((/* implicit */short) (-(((/* implicit */int) ((_Bool) var_0)))));
        var_18 = ((/* implicit */int) ((unsigned long long int) ((((-32768LL) + (9223372036854775807LL))) << (((((((/* implicit */int) (short)-11954)) + (11978))) - (24))))));
        var_19 = (!((!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_1]);
        var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [i_1] [(short)6]))))), (arr_0 [i_1])));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_14 [i_2] [i_2] = ((/* implicit */signed char) arr_11 [(_Bool)1]);
        arr_15 [i_2] = ((/* implicit */unsigned int) arr_6 [i_2] [i_2]);
        arr_16 [i_2] [i_2] = ((/* implicit */unsigned long long int) var_11);
        var_21 = ((/* implicit */unsigned int) ((long long int) arr_1 [i_2]));
        var_22 = ((/* implicit */short) ((_Bool) ((unsigned int) 886090142)));
    }
    for (long long int i_3 = 1; i_3 < 15; i_3 += 3) 
    {
        arr_20 [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) max((arr_19 [i_3] [i_3]), (arr_19 [i_3] [i_3])))) - (((/* implicit */int) ((((/* implicit */int) arr_19 [i_3] [i_3])) < (((/* implicit */int) arr_19 [i_3] [i_3])))))));
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_23 = ((((/* implicit */_Bool) arr_17 [i_3])) ? (((/* implicit */int) arr_19 [i_3 - 1] [i_3])) : (((/* implicit */int) ((short) -32749LL))));
            arr_23 [i_3] = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_3] [i_3]))))), ((-(((/* implicit */int) (unsigned char)255))))));
        }
    }
    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (short)13307))));
    var_25 += var_12;
}
