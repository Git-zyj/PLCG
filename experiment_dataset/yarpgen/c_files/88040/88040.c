/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_10));
    var_20 |= var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            arr_5 [i_1] = -var_17;
            var_21 = ((-(min(107, 17414876268482797450))));
        }
        var_22 = (!-39702);
        arr_6 [i_0] = (((arr_0 [i_0]) >= (arr_3 [i_0] [1] [i_0])));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            var_23 = ((39702 >= (63 - 0)));
            var_24 = (max(var_24, -var_1));
            arr_12 [13] [i_2] = var_17;
            var_25 += (((arr_9 [i_3 - 1] [i_3 - 1]) ? var_16 : (arr_11 [i_3 - 1] [i_3 - 1] [i_3 - 1])));
        }
        arr_13 [i_2] [i_2] = 39703;
        arr_14 [i_2] = ((((((arr_10 [i_2] [i_2]) ? var_1 : var_9))) && 4143741709));
    }
    #pragma endscop
}
