/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_10 *= (5062 >= 5062);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 ^= (arr_1 [i_4] [i_0 - 1]);
                                var_12 = (((-5063 % -5062) ? (((!(arr_2 [i_0 + 3])))) : (((arr_2 [i_0 + 2]) ? (arr_2 [i_0 + 3]) : (arr_2 [i_0 + 3])))));
                                var_13 = (!13010710995688141379);
                                var_14 &= (min(var_8, (arr_5 [2] [2])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (max(var_15, ((max(var_5, (min(var_9, ((var_9 ? 5062 : var_7)))))))));
    var_16 &= ((var_6 & (((((0 ? 5062 : 1))) ? ((max(var_5, var_0))) : (var_0 - var_6)))));
    var_17 = var_4;
    var_18 = (min(((0 ? -67 : 1)), var_9));
    #pragma endscop
}
