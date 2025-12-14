/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (+-var_5)));
    var_16 ^= -var_2;
    var_17 = ((var_4 + (var_14 + var_14)));
    var_18 = var_6;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= (36636 ? 6986459736910335718 : -6986459736910335713);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_19 = (arr_3 [i_0] [i_0] [i_0]);

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                var_20 = ((~(arr_0 [i_0])));
                arr_9 [i_1] |= -6986459736910335719;
                var_21 = (arr_4 [i_1] [i_2]);
                arr_10 [17] [i_1] [i_1] [i_2] |= ((!(((9223372036854775807 ? -1302647352 : -13655)))));
                var_22 = (((((arr_4 [i_1] [i_2]) % var_14)) >> (!var_7)));
            }
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                arr_13 [2] [i_0] [18] [i_3] = var_3;
                var_23 = var_0;
                arr_14 [i_0] [i_1] [i_3] = ((-(arr_8 [i_3] [i_1] [i_1] [i_0])));
            }
            arr_15 [i_0] = (arr_8 [i_1] [i_1] [i_1] [i_0]);
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_24 = var_9;
            arr_19 [i_0] |= ((4505799734306637010 - ((((!((((-1457890202282969475 + 9223372036854775807) << (((-1302647352 + 1302647362) - 10)))))))))));
        }
        arr_20 [11] = (arr_1 [i_0]);
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            arr_25 [i_5] [i_6] [i_6] = ((!(arr_8 [i_6] [i_6] [i_5] [8])));
            arr_26 [i_6] [i_6] = (arr_3 [i_5] [i_6] [i_6]);
            var_25 = (!-1457890202282969450);
        }
        var_26 = (arr_4 [i_5] [i_5]);
        var_27 ^= (arr_23 [i_5]);
        arr_27 [i_5] = (!-11708);
    }
    #pragma endscop
}
