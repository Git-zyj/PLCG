/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6754
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
    var_19 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)31017)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_20 = ((/* implicit */unsigned short) (short)635);
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))));
        }
        for (signed char i_2 = 2; i_2 < 19; i_2 += 1) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned short) ((int) arr_1 [i_2 + 2]));
            var_22 = ((/* implicit */unsigned int) var_11);
        }
        var_23 = ((/* implicit */signed char) ((((/* implicit */int) (short)-29116)) | (((/* implicit */int) (unsigned short)1023))));
        var_24 = ((/* implicit */signed char) arr_3 [i_0]);
        var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)7856))));
    }
    var_26 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) max((((/* implicit */int) var_12)), (var_0)))) - ((+(((((/* implicit */_Bool) var_3)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) var_3))));
}
