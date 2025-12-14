/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68552
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_14 |= ((/* implicit */unsigned int) (_Bool)0);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0]))))), (arr_0 [i_0])));
    }
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((_Bool) var_7)))));
    var_16 = ((/* implicit */long long int) var_10);
    /* LoopSeq 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 1; i_2 < 15; i_2 += 1) 
        {
            var_17 = ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_2 + 1])) ? (1216093918U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2 - 1] [i_1] [i_2 + 1]))));
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3078873378U)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
        }
        var_19 = ((/* implicit */_Bool) 3078873375U);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_20 = (-(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3] [i_3]))) * (arr_10 [i_3] [i_3])))) ? (((long long int) (unsigned short)7734)) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)(-127 - 1)))))))));
        var_21 = ((/* implicit */unsigned long long int) arr_9 [i_3] [i_3]);
        arr_11 [i_3] = (-(((/* implicit */int) arr_9 [i_3] [i_3])));
        arr_12 [i_3] [i_3] = ((/* implicit */signed char) arr_9 [i_3] [i_3]);
    }
    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
    {
        var_22 = ((/* implicit */_Bool) ((unsigned short) (signed char)27));
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) arr_14 [i_4]))));
        var_24 = ((/* implicit */long long int) var_1);
    }
}
