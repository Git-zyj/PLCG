/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96571
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) var_14);
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((2312592024768800364LL), (((/* implicit */long long int) var_6))))) ? ((+(var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)125)) >> (((((/* implicit */int) var_2)) - (15)))))))))));
                    var_20 = ((/* implicit */signed char) var_9);
                }
            } 
        } 
    } 
    var_21 = var_0;
}
