/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_17 *= ((var_0 << (255 - 252)));
                arr_5 [i_0] [i_0] [i_0] = ((((26047 && (arr_3 [i_1 - 1] [i_1 + 3] [i_1 + 3]))) ? ((((min(-8664079080998209452, 98)) > (((min(1, var_10))))))) : (arr_1 [i_0] [i_0])));
                var_18 = (max(var_18, ((max((((arr_1 [i_1 + 1] [i_0]) ? var_8 : (arr_0 [i_1]))), ((min((arr_0 [i_0]), 3))))))));
                arr_6 [i_0] [i_1] = 103;
            }
        }
    }

    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_19 = (max(var_19, ((-1 <= (arr_8 [i_2])))));
        arr_10 [i_2] [i_2] = 67;
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] [i_3] = var_0;
        var_20 += ((~(min((arr_12 [i_3] [i_3]), (-31551 == var_6)))));
    }
    var_21 = 245;
    var_22 = var_4;
    #pragma endscop
}
