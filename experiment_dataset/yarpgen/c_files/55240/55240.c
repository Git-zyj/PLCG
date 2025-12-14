/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            var_19 = (min((((max(6303, (arr_2 [i_0] [6]))) >> (min(var_12, var_9)))), (((((((arr_4 [i_0]) ? var_13 : -9223372036854775788))) ? (((arr_3 [i_0] [i_0]) ? -74 : var_6)) : ((-2147483631 ? var_4 : var_2)))))));
            var_20 = (max((max(((2147483631 ? var_2 : -8284294539673804360)), var_11)), (arr_3 [i_0] [i_1])));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_9 [i_0] [i_0] = (max((((((arr_2 [i_0] [i_2]) ? 1 : var_1)))), ((-87 ? (arr_6 [i_0] [i_0]) : 196))));
            var_21 = (min(14660167847553805739, ((min((arr_2 [i_0] [i_0]), (arr_5 [i_0] [i_2] [i_0]))))));
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_22 = (((~var_1) < ((var_11 ? (((min(var_18, var_5)))) : ((0 ? -4407444128335328526 : -121))))));

            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                var_23 = (max(var_23, 4407444128335328525));

                /* vectorizable */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    var_24 = 3458764513820540928;
                    arr_17 [i_0] [i_3] [11] [i_5] [i_0] = (~var_8);
                    var_25 = (max(var_25, (arr_5 [i_0] [i_3] [i_5])));

                    for (int i_6 = 4; i_6 < 19;i_6 += 1)
                    {
                        var_26 = var_6;
                        var_27 += var_11;
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        arr_24 [i_7] [12] [i_7] |= var_10;
                        arr_25 [i_0] [i_3] [i_7] &= var_12;
                        var_28 = ((~(arr_12 [i_0])));
                        arr_26 [i_0] [6] = (((var_12 + var_3) != var_2));
                    }
                    for (int i_8 = 3; i_8 < 17;i_8 += 1)
                    {
                        arr_30 [i_8] [i_8 - 1] [i_0] [i_4] [i_0] [i_0] [i_0] = var_11;
                        var_29 = (~(arr_22 [i_8 - 3] [i_8 - 3] [i_8] [i_8 - 3] [i_5]));
                    }
                }
                var_30 = (max(var_6, (((121 > (arr_10 [i_0] [i_0]))))));
                var_31 = (4839 > 2824260412);
                arr_31 [1] |= var_1;
            }
        }
        var_32 *= var_0;
    }
    var_33 = var_7;
    #pragma endscop
}
