/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77255
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
    var_20 = ((/* implicit */_Bool) min((var_9), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) != (var_18))))));
    var_21 = ((/* implicit */int) var_2);
    var_22 = ((/* implicit */_Bool) ((((/* implicit */int) ((var_18) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_8)) : (2147483647))))))) & (((/* implicit */int) ((((/* implicit */int) var_17)) != (((((/* implicit */_Bool) -2147483647)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_11))) & (var_19)))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((4294967295U) != (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            var_23 = ((/* implicit */signed char) var_1);
            var_24 = var_4;
            arr_6 [i_0] [i_1] &= ((/* implicit */unsigned long long int) 0LL);
        }
        arr_7 [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)127)), (2354065232U)))) ? (min((-2117057736721044430LL), (((/* implicit */long long int) 1940902089U)))) : (((/* implicit */long long int) max((max((var_16), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) var_6))))));
        var_25 = ((/* implicit */signed char) ((var_18) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    }
    for (unsigned int i_2 = 2; i_2 < 10; i_2 += 4) 
    {
        var_26 ^= min((-2147483641), (2147483647));
        var_27 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (1297900546U)));
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) (unsigned char)129))));
    }
    var_29 ^= ((/* implicit */short) ((min((((var_15) << (((((/* implicit */int) var_9)) + (118))))), (((/* implicit */unsigned int) max((var_4), (((/* implicit */int) (unsigned char)168))))))) | (((/* implicit */unsigned int) ((var_4) & (((/* implicit */int) max((var_11), (var_11)))))))));
}
