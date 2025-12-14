/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = (min(var_19, -var_14));
        var_20 = (min(var_12, 16382));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_6 [i_1] = (((((var_2 | (((arr_0 [i_1]) ? var_2 : -1))))) || ((min((min(var_8, var_10)), var_18)))));
        var_21 = (min((arr_1 [i_1] [i_1]), 48));
        var_22 = (max(var_22, ((max(var_11, ((((min((-2147483647 - 1), (-2147483647 - 1))) >= ((min(255, 1)))))))))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_23 = (max(var_23, -113));
        var_24 = ((((min((((2444482666163860378 ? (arr_2 [i_2] [i_2]) : 0))), ((13106797434530938865 ? 44414 : 2557593019792454509))))) && ((min((1068936563 < 16059), 0)))));
    }
    var_25 = (min(var_14, ((((!var_13) < var_4)))));
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            {
                var_26 = min((((arr_13 [i_3 + 1]) ? -9223372036854775802 : var_8)), (arr_13 [i_3 + 1]));
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_27 ^= ((9223372036854775801 ? 65 : var_12));
                            var_28 *= -1;
                            var_29 *= (min((((!(arr_12 [i_4] [i_6])))), (((arr_2 [i_3 - 1] [i_3 - 1]) ? (((var_6 ? 1 : var_2))) : 2557593019792454509))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
