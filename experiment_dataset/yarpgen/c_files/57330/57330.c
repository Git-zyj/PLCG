/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((!-222878416) | var_5);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0 + 1] [i_0 + 1] = ((10707064365779854324 ? var_2 : (arr_3 [i_0 + 1] [i_0])));
        arr_5 [i_0 + 1] [i_0 - 1] = (arr_3 [i_0] [i_0]);

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_8 [i_0] [i_1] = (((arr_6 [i_0 - 1] [i_1] [i_0 - 1]) % var_12));
            arr_9 [i_0 - 1] = ((var_14 >= (arr_2 [i_1])));
            arr_10 [i_0 - 1] [i_1] = ((arr_3 [i_1] [i_0 - 1]) ? (arr_0 [i_0 + 1]) : (arr_6 [i_0] [i_1] [i_1]));
        }

        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            arr_14 [i_0] = (((0 ? var_15 : 27803)) - (!-1087542400));
            var_19 = -1030225095392451957;
            arr_15 [i_2] = (arr_2 [i_2]);
            arr_16 [i_0] = (-(arr_2 [i_0 + 1]));
        }
        arr_17 [i_0] [i_0] = (((arr_3 [i_0] [i_0 + 1]) ? (arr_6 [i_0] [i_0] [i_0]) : ((4194300 ? var_7 : var_11))));
    }
    for (int i_3 = 3; i_3 < 9;i_3 += 1)
    {
        arr_21 [i_3] = (max((((arr_20 [i_3 - 2]) * (arr_20 [i_3 - 3]))), (min(15481359387180317377, 2731539490344584912))));
        var_20 = ((-(arr_18 [i_3 + 2])));
        var_21 = ((-((max((arr_12 [i_3 - 3]), (arr_6 [i_3] [i_3 + 2] [9]))))));
        var_22 |= (arr_0 [i_3 + 2]);
    }
    #pragma endscop
}
