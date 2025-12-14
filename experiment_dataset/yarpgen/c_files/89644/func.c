/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89644
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
    var_16 = ((/* implicit */long long int) (short)11875);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) (-(var_3)));
                var_17 = ((/* implicit */short) var_14);
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) -3991949531352837926LL)) ? (((/* implicit */int) (short)-11875)) : (((/* implicit */int) (short)11875)))) & ((~(((/* implicit */int) (short)12357))))))), ((+(4177591357U)))));
                arr_7 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) var_9)) & (((((/* implicit */int) ((unsigned char) (short)-11867))) & (((/* implicit */int) var_8))))));
            }
        } 
    } 
}
