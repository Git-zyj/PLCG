/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_9, (((499766653 > ((min(57, -1))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = (min((((var_15 || ((min(1, var_2)))))), (((arr_4 [i_0] [i_1 - 1] [i_0]) ? (arr_4 [i_0] [i_3 + 2] [i_2]) : var_10))));
                                var_21 = (((((0 | 5) | (251 ^ -1807020881579139274)))) ? 3816971849878573142 : (min(((var_0 ? 2101361519249546118 : var_10)), var_6)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_22 = (max(((((arr_17 [i_0] [i_0] [i_1] [i_5] [i_6]) & (arr_0 [i_1 - 1] [i_5 - 2])))), (((max(var_3, 1)) & (var_13 && var_5)))));
                                arr_19 [i_0 + 1] [i_5] [i_2] = ((max(((((arr_5 [i_2] [i_5] [i_6]) <= 60702))), -var_2)));
                            }
                        }
                    }
                    var_23 = (min(((6632285096617034468 ? (arr_12 [i_1 + 1] [i_1 + 1] [i_2] [i_1] [i_0] [i_1 + 1] [i_0 + 1]) : (arr_18 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1] [i_1] [i_0 + 1] [i_0 + 1]))), (min(((1 ^ (arr_12 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1] [i_1]))), (-42 ^ 155)))));
                }
            }
        }
    }
    var_24 -= ((var_18 ? var_13 : (min((var_15 | 1), (51280133 | 1476220401)))));
    var_25 = 1023;
    #pragma endscop
}
