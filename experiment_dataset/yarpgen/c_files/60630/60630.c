/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0] [i_0] = (65535 < -1029370354);
            arr_7 [i_0] [i_1] = (((arr_2 [i_0]) < var_4));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            var_12 = var_2;

            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                var_13 -= (-19086 >= 32761);
                arr_15 [i_0] [i_2] [i_0] = var_4;
                arr_16 [i_0] [i_0] [i_2] [14] = (arr_4 [i_2] [i_0]);
            }
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
        {
            var_14 = ((((var_10 << (((arr_18 [i_0] [i_0]) - 62888)))) ^ var_6));
            var_15 -= var_9;
            var_16 = (arr_8 [i_0] [i_4]);
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
        {
            var_17 = (arr_19 [i_5]);
            arr_22 [i_0] [i_5] = (((778294719166841999 >= 65535) != 24600));
            arr_23 [i_0] [i_5] |= var_1;
        }
        var_18 = var_3;
        var_19 = (var_3 || var_7);
        var_20 |= var_3;
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        arr_27 [i_6] = arr_5 [i_6];
        arr_28 [14] [i_6] = (((arr_17 [i_6] [i_6] [i_6]) ? (((arr_21 [i_6] [1] [i_6]) & var_0)) : var_9));
        var_21 = var_10;
    }
    var_22 = var_0;
    #pragma endscop
}
