/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (arr_2 [i_0] [4]);

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            var_12 ^= 30;

            /* vectorizable */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                var_13 = 65535;
                var_14 |= 1970324836974592;
                var_15 = ((!(arr_2 [i_1 + 1] [i_1 + 4])));
                var_16 = (arr_1 [10]);
            }
            var_17 = var_8;
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_18 *= ((!(((-((114 ? (arr_2 [i_3] [i_3]) : var_4)))))));
            arr_12 [21] [21] [21] = 12;
            arr_13 [i_3] = (arr_10 [i_0]);
            arr_14 [i_0] [22] = ((~(~1)));
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_19 = (max((max((~6862516284373775352), (!571832148))), 1));
            var_20 |= (((-(((arr_6 [i_4] [i_4] [i_0]) - (arr_2 [4] [i_0]))))));
        }
        for (int i_5 = 4; i_5 < 23;i_5 += 1)
        {
            var_21 -= ((!(~1)));

            for (int i_6 = 1; i_6 < 24;i_6 += 1)
            {
                var_22 = (min(var_7, ((((arr_15 [i_0] [i_5] [i_6]) > (arr_3 [9] [i_5]))))));
                var_23 *= (((arr_15 [i_0] [6] [i_6]) ? -var_4 : (arr_17 [i_0] [i_5] [i_0])));
            }
            var_24 &= var_6;
        }
        var_25 = (~var_4);
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        arr_27 [i_7] [i_7] = (max((max(1, (arr_2 [i_7] [i_7]))), (((-(arr_22 [i_7] [i_7] [i_7] [i_7]))))));
        arr_28 [i_7] = 1;
        var_26 = max(511, var_0);
    }
    var_27 = ((!((((!var_4) * var_2)))));
    var_28 += (min((!0), (~3723135148)));
    #pragma endscop
}
