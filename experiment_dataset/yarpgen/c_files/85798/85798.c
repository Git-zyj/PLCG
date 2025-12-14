/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, -30858));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_20 ^= (max(var_7, ((((min(var_16, var_11))) ? (((-2147483647 - 1) ? var_9 : 2130303778816)) : (arr_9 [i_0] [i_0] [i_0])))));
                                var_21 = (((~var_18) ? ((max(1, (arr_3 [i_0])))) : (((!(((var_4 ? 0 : var_12))))))));
                                var_22 ^= (+-6502777366344237018);
                                var_23 = (((-672861333 ^ 17151347495042739085) ? var_9 : (min((arr_2 [i_1]), var_2))));
                            }
                        }
                    }
                }
                var_24 = ((((((!(arr_7 [i_0] [i_1] [i_0] [i_1 - 1]))))) < (~12322661061183025902)));
            }
        }
    }
    var_25 = var_8;
    var_26 &= ((~(min(var_12, ((4140698467 ? 154268829 : var_14))))));
    #pragma endscop
}
