/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_18 = (max((arr_2 [i_0 + 1] [i_0]), (((var_7 ? (arr_3 [i_0 + 1]) : -127)))));
        arr_4 [i_0] = (arr_3 [i_0]);

        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            var_19 = (max((((arr_0 [i_0 - 1] [i_0 + 2]) ? var_0 : (arr_0 [i_0 - 1] [i_0 + 2]))), (21448 < 0)));
            arr_9 [i_0] [i_0] [i_1] = var_11;
        }
        arr_10 [i_0] &= min((((arr_5 [i_0 - 1] [0] [i_0]) ? var_17 : (~var_9))), ((((arr_1 [i_0]) != 64578))));
    }
    var_20 = (((((124 ? var_17 : var_16))) ? (~var_3) : var_11));
    var_21 = (min(var_21, var_8));
    var_22 = var_0;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 23;i_3 += 1)
        {
            {
                var_23 = (min(var_23, ((max((((-(arr_14 [i_3 - 3] [i_3 - 2])))), (((arr_12 [i_2] [i_2]) ? (arr_12 [i_3 - 3] [i_3 - 3]) : var_3)))))));
                arr_17 [i_3 - 2] = ((((-(arr_14 [i_3] [i_3 - 2]))) ^ -var_9));
                var_24 |= min(64586, (((!(((1536 ? (arr_12 [i_2] [12]) : var_9)))))));
            }
        }
    }
    #pragma endscop
}
