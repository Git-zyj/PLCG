/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77459
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
    var_19 ^= ((/* implicit */unsigned char) var_4);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
                    var_21 = ((/* implicit */_Bool) min((var_21), (((((/* implicit */unsigned int) (+(((/* implicit */int) var_14))))) >= (max(((~(var_3))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_1])) / (((/* implicit */int) (short)15032)))))))))));
                }
            } 
        } 
    } 
}
