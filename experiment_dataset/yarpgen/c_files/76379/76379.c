/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_13 &= (!829527047);

            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                arr_10 [i_1] [i_1] [i_1] &= (((((65529 ? 7278 : -30788))) / (15215430539638784268 + -113)));
                arr_11 [13] [i_0] [i_2] [11] = -118;

                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {
                    arr_15 [i_0 + 2] [10] [17] [i_0] = arr_2 [i_0] [i_1];
                    arr_16 [i_0] [18] [i_2] [i_3] = (min((max((arr_12 [i_2 + 1] [i_2 + 2] [i_2 - 1] [i_0] [i_2 + 2] [i_2 - 1]), 1)), (arr_9 [i_0] [i_3 - 1])));
                    var_14 = 2752836937;
                    arr_17 [i_0] [13] [5] [i_3] [9] [i_0] = (!var_2);
                }
                var_15 = (min(var_15, (((!(~32748))))));
            }
        }
        /* vectorizable */
        for (int i_4 = 3; i_4 < 18;i_4 += 1)
        {
            var_16 = ((!(arr_6 [i_4 - 1] [i_0])));
            var_17 = (arr_4 [i_0] [i_0] [i_4 + 2]);
            var_18 = (arr_1 [i_0]);
        }
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            arr_24 [i_0] [i_0] = (arr_2 [i_0] [i_5 + 3]);
            var_19 = (min(var_19, ((((arr_5 [19] [i_0 + 2]) ? 2559580113 : (arr_1 [0]))))));
            arr_25 [i_0] [i_0] = (min(((min(((~(arr_7 [12] [i_0 + 1]))), (~var_4)))), (min((min((arr_20 [i_0]), (arr_12 [i_0 + 1] [i_0 + 1] [i_5] [i_0] [i_5] [i_5]))), (!1735387182)))));
        }
        var_20 = (max(var_20, ((-(((arr_19 [0]) ? var_10 : 4294967284))))));
        var_21 = (max((((arr_18 [i_0] [i_0]) ? ((((1735387182 >= (arr_3 [i_0] [i_0] [14]))))) : (min((arr_4 [2] [i_0] [i_0 + 1]), (arr_22 [i_0] [16]))))), 82));
        var_22 = (min(var_22, (((!((min(((var_7 ? var_4 : (arr_6 [i_0] [14]))), (-32767 - 1)))))))));
        arr_26 [i_0] = (((((((32765 ? 1 : var_2))))) + (arr_1 [i_0])));
    }
    var_23 = var_10;
    #pragma endscop
}
