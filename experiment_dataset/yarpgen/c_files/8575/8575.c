/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, (((((arr_2 [i_0] [i_1]) ? ((-(arr_7 [i_0] [i_1] [i_1] [2]))) : 14550)) <= -1349855484))));
                    var_15 = var_10;
                    arr_8 [i_0] [i_0] [i_2] |= (~(((!(!4869163992410928202)))));
                    arr_9 [i_1] [i_2] = (~var_13);
                }
            }
        }
    }
    var_16 = var_12;
    var_17 = (((!var_10) ? (var_4 == var_6) : 1594007162));

    /* vectorizable */
    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        var_18 = -var_10;

        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_14 [i_3] = (((1 ? var_3 : (arr_11 [i_3] [i_4]))));
            arr_15 [7] [i_3] = (arr_11 [i_4] [6]);
            var_19 ^= ((!(arr_10 [13] [i_4])));
            arr_16 [13] [i_3] [i_4] = 244;
        }
        var_20 = (min(var_20, (!var_8)));
    }
    #pragma endscop
}
