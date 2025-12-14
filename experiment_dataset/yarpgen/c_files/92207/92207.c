/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_10 = ((12 & (arr_2 [i_0])));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_11 = (min(var_11, (arr_5 [i_0] [i_1])));
            var_12 = (var_2 ? (arr_4 [i_0] [i_0 + 1] [i_0]) : (arr_5 [i_0] [i_1]));
            arr_6 [i_1] [i_1] = (arr_2 [i_0]);
            arr_7 [i_1] = (((arr_3 [i_0 - 2] [i_0 + 1]) ? (((arr_2 [i_0]) ? (arr_1 [i_1] [i_0]) : var_7)) : 18446744073709551615));
            arr_8 [i_0] [i_1] [i_1] = (arr_5 [i_0] [i_1]);
        }
        arr_9 [i_0] [i_0] = (((arr_2 [i_0 - 1]) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 - 1])));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_13 += ((-156234216 ? 0 : 15204957859398116940));
        var_14 = ((-156234216 ? 3093363867 : 30116));
        arr_13 [5] = (((((((var_7 ? (arr_11 [i_2] [i_2]) : -24500))) ? (3093511365 / 93) : (((arr_12 [i_2]) * 1023)))) / (arr_12 [i_2])));
        var_15 += ((var_3 ? ((var_8 ? ((421021875 ? (arr_12 [i_2]) : var_3)) : var_9)) : ((0 ? var_2 : ((min((arr_10 [i_2]), var_4)))))));
    }
    for (int i_3 = 4; i_3 < 19;i_3 += 1)
    {
        var_16 = (((arr_14 [i_3] [i_3]) ? (((0 ? (((arr_15 [i_3]) ? (arr_15 [i_3]) : (arr_15 [i_3]))) : (((arr_15 [i_3]) ^ (arr_14 [i_3] [i_3])))))) : -5737178635112664356));
        arr_16 [i_3] [i_3] = 13245802703916922276;
        var_17 *= var_1;
    }
    var_18 += 1;

    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_19 += ((((((156234224 ? (arr_19 [i_4] [17]) : (arr_19 [i_4] [14]))) + 2147483647)) << (((var_7 + 99) - 6))));
        arr_20 [i_4] = (arr_14 [i_4] [i_4]);
    }
    #pragma endscop
}
