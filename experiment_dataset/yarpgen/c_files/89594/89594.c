/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_17 = (min(var_17, 5174111149804198115));
        arr_3 [i_0] [i_0] |= (var_15 && var_4);
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 15;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_3] = (((((((var_12 || (arr_12 [i_2]))) ? var_14 : (arr_11 [i_1] [i_3 - 1] [i_1 + 4] [i_3])))) | (((((((arr_5 [i_3]) || var_1)))) | (2766592189830360565 & 135)))));
                    arr_14 [i_1] [i_1] [i_1] [i_3] = (min((((arr_4 [i_1 + 4]) ? (arr_8 [i_1] [i_3 - 2] [i_3]) : (159 & 10548765960322466126))), (arr_10 [i_1] [i_3 + 1])));
                }
            }
        }
        var_18 = (max(var_18, (((-5174111149804198110 ? var_8 : (arr_10 [i_1 + 4] [i_1 + 4]))))));
    }
    var_19 -= var_6;
    #pragma endscop
}
