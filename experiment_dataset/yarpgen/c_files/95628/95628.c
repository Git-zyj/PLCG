/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-(((!(!15518))))));
    var_18 = var_5;

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_19 = ((((((var_5 ? 2980054198 : 1)))) ^ (min(var_1, (4233459063539227663 / var_9)))));
        var_20 = (arr_1 [8]);
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            arr_7 [i_1] [i_1] = (min(((-15518 ? -15518 : (!var_8))), -var_14));

            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {

                /* vectorizable */
                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_17 [10] [i_2] [11] [i_1] [4] [6] = var_0;
                        var_21 = 382762445;
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_22 = (((arr_11 [i_4 - 1] [i_4 + 2] [i_4 + 3] [i_4 + 1] [i_4 + 1]) ? (arr_11 [i_1 + 1] [i_2] [i_3] [4] [i_6]) : (arr_13 [i_2 + 2] [i_1] [i_1] [i_1 + 1])));
                        arr_20 [i_6] [1] [15] [i_1] [i_2] [1] [19] = (arr_6 [i_1 + 1]);
                        var_23 = (min(var_23, (((11406 ? 2871 : 13)))));
                    }
                    arr_21 [i_1] [i_1] [3] [16] = (((1277942482 >= (arr_15 [1] [i_2] [i_2] [0] [i_3] [20]))) ? (var_1 && var_11) : (arr_5 [i_1] [i_2 + 2]));
                }
                var_24 = 0;
                arr_22 [i_1] [14] [i_3] [18] &= (arr_2 [i_1 - 1]);
                arr_23 [i_1] [i_1] [i_1] = ((((((arr_15 [i_1] [i_1] [i_2 + 2] [i_2] [5] [i_3]) ^ (arr_8 [6] [i_2 + 2] [i_1])))) ? (min((-127 - 1), var_5)) : ((((var_11 ^ (arr_14 [i_1]))) + (62664 + 233)))));
                arr_24 [i_1 + 2] [i_2 - 1] [i_1] = var_8;
            }
            for (int i_7 = 2; i_7 < 19;i_7 += 1)
            {
                arr_28 [i_1] [i_1] [i_1] = var_15;
                var_25 = (min((((!(arr_26 [i_1] [i_2] [13] [i_7 + 1])))), ((((arr_9 [i_1 + 2] [i_1 - 1] [i_1]) || (arr_2 [i_1 + 2]))))));
            }
        }
        var_26 = var_4;
        arr_29 [i_1] [i_1] = ((min((((8333956366166112715 || (arr_5 [i_1] [i_1])))), (arr_25 [i_1 + 2] [i_1 + 2]))));
    }
    #pragma endscop
}
