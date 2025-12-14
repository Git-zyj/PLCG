/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((-((var_0 ? var_4 : -977882298)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = (((((~(arr_0 [i_2 + 1])))) ? (min((arr_0 [i_2 + 1]), (arr_0 [i_2 + 1]))) : (((arr_0 [i_2 + 2]) ? (arr_0 [i_2 + 3]) : (arr_0 [i_2 + 2])))));
                    var_14 = (((((~(arr_3 [i_0] [1])))) ? (arr_1 [i_0]) : (min(2147483648, 977882298))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_15 = (i_6 % 2 == zero) ? ((((((((((~(arr_20 [i_6]))) + 2147483647)) >> (131230653317790863 - 131230653317790844)))) ? (arr_12 [i_3]) : (((((-677235333 ? 8638845568476569290 : 677235333))) ? 601200988078137862 : ((89 ? var_3 : (arr_9 [7] [7])))))))) : ((((((((((((~(arr_20 [i_6]))) - 2147483647)) + 2147483647)) >> (131230653317790863 - 131230653317790844)))) ? (arr_12 [i_3]) : (((((-677235333 ? 8638845568476569290 : 677235333))) ? 601200988078137862 : ((89 ? var_3 : (arr_9 [7] [7]))))))));
                            arr_22 [i_6] [i_4] [i_4 - 2] [i_4 + 4] = (((+-254) == var_10));
                            var_16 = (~var_7);
                            var_17 = ((((max(677235332, -677235319))) ? (!var_5) : (((!(arr_11 [i_4 + 3]))))));
                            var_18 = min(((0 << (((((arr_18 [i_6 - 3] [i_4 - 1] [i_3]) ? 677235328 : 1)) - 677235326)))), 7692);
                        }
                    }
                }
                var_19 = (((!(arr_9 [i_4 - 2] [i_3 - 1]))) ? (arr_20 [i_4]) : (((arr_9 [i_3 - 1] [i_4 + 1]) / var_4)));
                var_20 = (min(var_20, ((min(((((arr_20 [i_4]) >> 0))), (arr_19 [i_3 + 1] [i_4] [i_3 + 4] [i_3]))))));
                arr_23 [i_3] [i_4] = ((((((((4952068506109535593 ? 0 : 1365907651)) == var_5)))) == var_5));
                arr_24 [i_3] [i_3] [i_4 + 2] = (max((arr_10 [i_3]), -677235326));
            }
        }
    }
    #pragma endscop
}
