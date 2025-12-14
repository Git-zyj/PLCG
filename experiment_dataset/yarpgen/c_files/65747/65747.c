/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_12 = (max((((max(568383571, 1314011758277344305)) << (((568383571 * -86) - 2658620421)))), ((min((((arr_3 [i_0]) / 568383571)), var_10)))));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                var_13 = (min(var_13, ((((((-(arr_2 [i_0] [i_1])))) ? -var_7 : (50253 / var_6))))));
                                arr_15 [i_1] = ((!(((var_1 ? var_0 : var_8)))));
                                var_14 = (((arr_13 [i_3] [i_3] [i_3] [i_3 + 3] [i_3] [i_3 + 3]) | ((var_10 ? var_5 : 2146959360))));
                                var_15 = ((((0 ? var_1 : var_6)) - (arr_14 [13] [i_3 + 3] [i_3] [7] [i_3 + 3])));
                            }
                            arr_16 [i_1] = min((((arr_8 [i_0] [i_3 + 1] [i_2] [2]) ? (arr_8 [i_0] [i_3 + 3] [i_2] [19]) : var_10)), var_11);
                        }
                    }
                }
                arr_17 [i_1] = ((!(568383584 - var_6)));
                var_16 = ((((((249 ? 3726583743 : 1)) <= (arr_1 [i_1] [12]))) ? (((arr_6 [i_1]) + (min((arr_9 [i_1] [i_1] [i_1]), 64)))) : ((min(((21 ? 45002 : 15283)), (193 != 934334615))))));
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_26 [i_0] [i_1] = (((max(3110644212, 191)) - (-3726583712 + var_9)));
                                var_17 = ((((((((~(arr_4 [i_0] [i_0])))) && var_10))) >> ((((max(1, 682474527))) - 682474513))));
                            }
                        }
                    }
                }
                arr_27 [i_0] [i_1] [i_1] = ((~(((var_4 && (arr_11 [i_1] [i_1]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 13;i_9 += 1)
        {
            {
                var_18 = (min(var_18, ((max(934334631, (arr_1 [i_8] [i_9 + 3]))))));
                var_19 = ((~((50275 ^ (arr_2 [i_8] [i_9 + 1])))));
            }
        }
    }
    var_20 += (~(((~var_10) ^ var_0)));
    #pragma endscop
}
