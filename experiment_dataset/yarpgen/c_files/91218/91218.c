/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_14;
    var_17 = (min(var_17, var_3));
    var_18 = var_9;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_19 = (max(var_19, ((((arr_1 [i_0 - 1]) * (min(0, 3849106793)))))));

            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                var_20 = ((~(max(-29, var_5))));
                var_21 = (max(var_21, ((max(-66, 0)))));
                var_22 += var_7;
            }
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                var_23 = 1;
                arr_11 [i_0] [i_0 - 1] [2] |= (max(((min(var_12, (arr_1 [i_0 + 2])))), (arr_1 [i_0 + 2])));
            }
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            arr_15 [i_0] = (((arr_9 [i_0 + 1] [i_0 + 2] [i_0 + 2]) | (0 / var_9)));
            arr_16 [9] [i_4] = (~(min(1, (((arr_13 [i_4]) / (arr_2 [i_0]))))));
            var_24 = (min(var_24, (((((!(arr_7 [i_4] [i_0 + 3] [i_4]))))))));
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_25 = (max(var_25, -445860508));
            arr_19 [i_0 + 2] [1] [6] = max((!89), var_6);
        }
        var_26 = (max(var_26, ((!(((-(arr_10 [i_0] [i_0] [6]))))))));
        arr_20 [i_0 + 3] = ((max(939741940000186702, 6884419743970826929)));
    }
    #pragma endscop
}
