/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92299
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0] [(short)14] [(short)14] = ((/* implicit */unsigned char) var_11);
                var_20 += ((((unsigned int) ((arr_4 [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) | (((((/* implicit */_Bool) ((signed char) arr_2 [i_0] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((var_17) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))))))));
                var_21 = (~(((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)(-127 - 1))) / (((/* implicit */int) (unsigned short)508))))) & ((~(var_19))))));
                arr_6 [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2781287959U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65028))) : ((-9223372036854775807LL - 1LL))))) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_1);
    var_23 = ((/* implicit */unsigned char) var_0);
}
