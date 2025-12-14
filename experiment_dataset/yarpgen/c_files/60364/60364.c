/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((((var_6 >> (!var_4)))), (min(((63 ? var_6 : var_5)), var_10))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = 63;
        var_13 = (max(17494126630319032238, 45346263));
        arr_3 [12] = ((!(193 / var_0)));
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        arr_6 [4] &= var_9;
        var_14 += (((arr_0 [i_1 + 2]) ? ((((arr_0 [i_1 - 2]) ? 0 : -1))) : (min((arr_0 [i_1 + 2]), var_6))));

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            arr_9 [i_1 + 1] [i_2 - 1] [i_2] = 63;
            arr_10 [i_1] [i_2] = ((~(3406 | var_2)));
            var_15 |= max(var_2, var_10);
            var_16 = var_9;
        }
        var_17 = (max(var_3, (((var_1 / var_10) * (((arr_5 [7] [7]) ? var_8 : var_1))))));

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                arr_17 [i_3] [3] = 3253750159000248850;
                var_18 = (((((~(min(var_5, var_4))))) || var_5));
            }
            for (int i_5 = 2; i_5 < 11;i_5 += 1)
            {
                arr_20 [i_3] = ((2047 ? var_7 : var_0));
                var_19 = (max(var_19, (((!(+-63489))))));
            }
            var_20 = 65534;
        }
    }
    var_21 = (max(var_21, ((!(2053 | 57)))));
    var_22 = var_2;
    var_23 = (!var_4);
    #pragma endscop
}
