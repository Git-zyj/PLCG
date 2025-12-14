/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_18 = (max(var_18, (~var_8)));
        var_19 = (min(var_19, ((min((((-4373519808467490401 | ((-4373519808467490401 ? 1115 : 67))))), (arr_0 [i_0 + 1]))))));
    }
    var_20 = var_8;
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            {
                arr_7 [8] [1] [i_2] = arr_4 [i_2];
                arr_8 [i_1] [i_1 - 1] = var_7;
                var_21 = -68;
                var_22 = ((!(((((!(arr_6 [9] [9] [9]))) ? 7420 : var_12)))));

                for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                {
                    var_23 = 304545589;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_24 += (((+(max((arr_11 [i_1] [i_2] [i_3] [i_4] [i_5 - 2]), (arr_6 [i_1] [12] [10]))))));
                                var_25 = 4373519808467490401;
                                arr_15 [i_5] [i_4] [i_4] [i_4] [i_4] [i_2] [i_1] = ((!(arr_12 [i_1 + 1] [i_4])));
                            }
                        }
                    }
                    var_26 = ((((max((2147475456 > var_11), ((~(arr_3 [i_1])))))) ? (((!(!4373519808467490408)))) : 0));
                }
                for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                {
                    arr_18 [i_6] [i_6] [i_2] [i_1] = var_10;
                    var_27 += 1355063139;
                }
            }
        }
    }
    #pragma endscop
}
