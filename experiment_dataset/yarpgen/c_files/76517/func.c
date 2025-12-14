/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76517
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
    var_11 = ((/* implicit */unsigned char) (~(((((((/* implicit */int) var_10)) >> (((/* implicit */int) var_4)))) << ((((~(((/* implicit */int) var_0)))) + (28)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_12 = ((/* implicit */unsigned int) var_5);
            arr_6 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))));
            var_13 += ((/* implicit */signed char) ((var_7) != (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1])))));
        }
        arr_7 [i_0] = var_4;
        arr_8 [i_0] [i_0] = ((/* implicit */signed char) arr_1 [i_0 + 1] [i_0]);
        var_14 = ((/* implicit */unsigned int) ((arr_0 [i_0]) > (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_3)))));
    }
    for (signed char i_2 = 2; i_2 < 23; i_2 += 4) 
    {
        arr_13 [i_2 - 1] [i_2 - 1] = var_3;
        arr_14 [i_2] = ((/* implicit */unsigned long long int) (((~(8372224U))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 2047U))))))));
    }
    var_15 = ((/* implicit */unsigned char) (-(((unsigned long long int) ((var_3) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
}
