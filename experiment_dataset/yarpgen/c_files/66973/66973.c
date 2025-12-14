/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;
    var_19 = (min(var_19, ((min(12582912, 1)))));
    var_20 = ((1 ? 4282384377 : 1));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_21 = (arr_0 [i_0]);
                    var_22 = (min(var_22, 43));
                    var_23 ^= (((min(31, (arr_7 [i_0 - 1] [i_1 + 1] [i_2 + 1] [i_2])))));
                    var_24 ^= (min((min(34, (arr_6 [i_1 + 1] [i_1 + 1]))), (min((!-92), ((var_11 ? 1 : 60170))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_25 = arr_12 [i_3] [i_3];
        var_26 -= 5009189247400500949;
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_15 [9] = (arr_8 [i_4] [i_4] [i_4]);
        arr_16 [i_4] &= (max((arr_8 [1] [i_4] [i_4]), (max(((~(arr_9 [i_4]))), (arr_5 [i_4])))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                {
                    var_27 = (max(var_27, var_16));
                    var_28 = (min((max((max(-4, (arr_6 [i_4] [i_4]))), (var_9 * var_6))), ((((min(1, var_12))) ? (((arr_0 [i_5]) ? 2147483632 : (arr_2 [i_5]))) : (arr_21 [i_5])))));
                }
            }
        }
    }
    #pragma endscop
}
