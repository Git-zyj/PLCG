/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60171
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_11 += ((/* implicit */_Bool) ((arr_1 [i_0]) % (((/* implicit */unsigned long long int) (+(var_4))))));
        arr_2 [0ULL] = ((/* implicit */unsigned char) var_5);
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_3] = ((/* implicit */short) var_9);
                        arr_11 [7U] [i_2] [i_3] = ((/* implicit */signed char) 998847037U);
                    }
                } 
            } 
        } 
    }
    var_12 = ((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) <= (3296120258U));
    var_13 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) << (((((/* implicit */int) var_2)) - (147))))));
    var_14 = ((var_7) << (((998847024U) - (998846989U))));
}
