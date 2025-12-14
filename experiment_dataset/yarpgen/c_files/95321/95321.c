/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_15 = (max(var_15, ((max((((((min((arr_2 [i_3 + 1] [i_1]), 3889875030))) ? ((2537663067 ? 0 : (arr_9 [i_0] [i_3] [i_3] [i_2] [1] [i_3]))) : 108790355))), (((var_8 ? 0 : 251))))))));
                            var_16 -= (max(-2061, (((((242 & (arr_8 [i_0] [i_1] [i_2] [i_2])))) ? ((min(var_4, (arr_10 [i_0] [14])))) : ((min((arr_7 [i_0] [i_1] [i_2] [i_3]), var_9)))))));
                        }
                    }
                }
                var_17 = ((((~((589938370910622642 ^ (arr_7 [i_0] [i_0] [i_0] [i_1]))))) >= ((((!var_6) / ((min((arr_0 [i_1] [i_1]), 47797))))))));
            }
        }
    }
    var_18 -= ((((min(var_9, (!var_3)))) ? (var_9 && var_9) : (((((1 ? 992689140 : var_10)) <= var_14)))));
    #pragma endscop
}
