/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -138424701;
    var_16 |= max(123, -178422833);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = 124;
        var_17 = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        var_18 = (max(var_18, ((((max(((var_10 ? (arr_3 [i_1]) : -178422833)), 178422812)) <= var_3)))));
        var_19 = (max(var_19, (((((~(arr_3 [i_1 + 2])))) ? 178422798 : (arr_3 [i_1 - 1])))));

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_7 [1] = ((49312 || (((min(15396041682265618457, (arr_3 [i_1])))))));
            var_20 = (12201 || 178422808);
            var_21 ^= ((1 > ((7038979391401597233 ? 3944277044 : 48743))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_22 = (arr_5 [i_1 + 1]);
            arr_12 [i_1] [10] [10] = arr_3 [i_1 + 1];
        }
    }
    var_23 = ((-(((var_14 || 5623199380088237350) & var_7))));
    #pragma endscop
}
