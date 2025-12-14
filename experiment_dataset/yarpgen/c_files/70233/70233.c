/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                var_15 |= min((var_7 > 1669862230476366569), (var_8 / 524287));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_16 = 203;
                    arr_11 [i_0] [i_1 - 1] [i_2] = ((var_3 ? (arr_5 [i_1 - 1] [i_1 - 3] [i_1 - 2]) : 0));
                    var_17 -= var_0;
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        arr_15 [i_3] = 5886297091875290302;

        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_18 = (105 % 248);
            arr_18 [i_3] = ((7683358483638008091 < (((((arr_3 [17] [i_4] [5]) < var_12))))));
            var_19 = (arr_14 [i_3 - 1] [i_3]);
        }
        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            var_20 = (((var_3 / 8610137408281753652) <= (arr_6 [i_3 - 1] [i_3 - 1] [i_3 - 1])));
            arr_21 [i_3] [i_5] [i_3] = -105;
            arr_22 [i_3] = (var_10 <= (((-9223372036854775795 ? 1 : 1521840010))));
            var_21 = (arr_0 [i_3 - 1]);
        }
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            arr_25 [i_3] [i_3] = ((((!(arr_3 [i_3] [i_6] [i_6]))) ? (((-105 + 2147483647) << (7789153054405437502 - 7789153054405437502))) : var_7));
            var_22 = (var_10 > 1300431389);
            var_23 = (((arr_14 [i_6] [i_3]) ? (arr_13 [i_6] [i_6]) : ((-(arr_1 [i_3])))));
            var_24 = (~4240113339591877456);
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        var_25 = (!var_12);
        var_26 *= -1783505159;
    }
    #pragma endscop
}
