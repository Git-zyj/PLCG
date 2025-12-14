/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77614
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
    for (int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) ((var_19) > (((/* implicit */int) arr_1 [i_0 - 1])))))) / (min((var_3), (((/* implicit */unsigned int) arr_0 [i_1])))))) * (((/* implicit */unsigned int) arr_3 [i_1] [i_0 - 1]))));
                var_20 = ((/* implicit */signed char) arr_3 [i_0] [i_0]);
                var_21 *= ((/* implicit */unsigned int) (~(arr_2 [(short)2])));
                arr_5 [i_0] [i_0] [(short)6] = ((/* implicit */unsigned int) min((max(((+(2147483645))), ((~(arr_3 [(unsigned char)16] [i_0]))))), (arr_2 [i_0])));
            }
        } 
    } 
    var_22 = ((/* implicit */int) min((((/* implicit */unsigned char) ((1134406156U) <= (3160561139U)))), (var_14)));
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) << (((/* implicit */int) (!(((/* implicit */_Bool) min((var_16), (((/* implicit */int) var_12))))))))));
    var_24 = ((/* implicit */int) var_9);
}
