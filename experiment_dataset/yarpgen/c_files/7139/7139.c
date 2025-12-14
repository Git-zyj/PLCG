/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = max((max((arr_2 [i_0]), (arr_2 [i_0]))), var_10);
        var_15 |= (((((8791 >= (8793 & var_3)))) | var_3));
        var_16 = ((-(!var_8)));
        var_17 = ((var_3 ? 13395211715271541491 : ((min(9223372036854775807, 0)))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_18 = (((~((-(arr_7 [i_2] [20]))))));
            arr_9 [i_1] &= var_13;
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {

            for (int i_4 = 2; i_4 < 21;i_4 += 1)
            {
                arr_16 [i_1] [i_3] [i_4 + 2] = -9223372036854775807;
                arr_17 [i_3] [19] [19] [i_3] = -var_13;
                var_19 = var_13;
            }
            arr_18 [i_3] [i_3] = (~var_3);
            arr_19 [i_3] = var_9;
            var_20 = ((((((arr_4 [i_1]) + ((min(var_7, 21)))))) ? (((~(arr_6 [i_1] [i_1])))) : var_9));
        }
        var_21 = (min(var_21, ((max(159, (min((arr_3 [i_1]), var_4)))))));
        var_22 = (~var_13);
        arr_20 [i_1] = var_0;
        var_23 = 4294967290;
    }

    for (int i_5 = 2; i_5 < 10;i_5 += 1)
    {
        var_24 = (arr_15 [i_5] [i_5 + 2] [i_5] [4]);
        arr_24 [i_5] = (arr_5 [i_5]);
    }
    for (int i_6 = 1; i_6 < 16;i_6 += 1)
    {
        var_25 = (min(var_25, 2047));
        arr_27 [i_6] = (-127 - 1);
    }
    #pragma endscop
}
