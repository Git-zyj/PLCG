/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_3));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_16 &= ((var_3 ? (arr_3 [i_1] [i_0]) : (((((103 ? 8188 : (arr_3 [i_0] [i_0 + 1])))) ? var_12 : (arr_3 [i_0 - 2] [i_1 + 2])))));

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                var_17 = var_7;
                var_18 = ((((max((arr_2 [i_0 - 1]), 59821))) ? (((arr_2 [i_0 - 1]) ? (arr_2 [i_0 - 1]) : var_12)) : (!0)));
            }
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                arr_10 [i_1] [i_3] = ((!((max(134, ((153 ? 93 : (arr_4 [i_1]))))))));
                arr_11 [14] [i_1] = 19;
                var_19 = ((!(((((3072 ? (arr_0 [i_0 + 1]) : 32694)) ^ ((0 ? 29 : 30720)))))));
            }
        }
        var_20 = (min(((((arr_0 [i_0 + 1]) < var_2))), (max(1, 92))));
    }
    for (int i_4 = 4; i_4 < 16;i_4 += 1)
    {
        var_21 = (!17232);
        var_22 &= min(27395, 1);
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_23 = ((((max((arr_14 [i_5] [i_5]), (arr_14 [i_5] [i_5])))) ? ((((min(54, 62930))) + (arr_15 [i_5]))) : (arr_16 [i_5])));
        var_24 ^= (((((119 ? 223 : 9741))) ? ((var_5 ? (arr_15 [i_5]) : (arr_15 [i_5]))) : (arr_15 [i_5])));
        var_25 = (arr_16 [i_5]);
        var_26 &= (((!150) / ((30698 ? 135 : 27791))));
    }
    var_27 *= (max(163, 9));
    var_28 = (65525 & 254);
    #pragma endscop
}
