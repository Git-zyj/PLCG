/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66431
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
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) + (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) var_14))))))) : ((-(((var_3) << (((var_3) - (708483934)))))))));
    var_16 &= ((/* implicit */unsigned char) (-2147483647 - 1));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_2)))) + (max((((/* implicit */int) (_Bool)0)), (0)))))) ? ((~(((/* implicit */int) (short)-31613)))) : (((/* implicit */int) min(((short)1877), (((/* implicit */short) ((((/* implicit */int) (short)15126)) >= (var_3)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */int) min((var_7), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) (-2147483647 - 1))) != (arr_4 [i_1])))))))));
                var_19 = ((/* implicit */unsigned long long int) var_12);
            }
        } 
    } 
    var_20 = var_10;
}
