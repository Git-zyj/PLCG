/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90320
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
    var_16 = ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1 - 2] [i_1] = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-1))))) < (((/* implicit */int) var_12))))), (var_9)));
                arr_5 [i_1 - 1] [i_0] [i_0] = ((/* implicit */unsigned char) ((var_15) << (((max((((/* implicit */long long int) min((var_13), (((/* implicit */unsigned short) (short)-1))))), (((arr_1 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-9223372036854775802LL))))) - (24194LL)))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((max((((/* implicit */int) var_7)), (var_9))), (((/* implicit */int) arr_1 [i_0]))))) == (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) != (((/* implicit */int) var_10))))), ((~(var_5)))))));
            }
        } 
    } 
}
