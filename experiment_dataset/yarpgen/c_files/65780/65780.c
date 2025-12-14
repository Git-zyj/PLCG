/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_7 ? (((~125) - ((var_8 ? -106 : var_10)))) : var_0));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 = (max(((max(var_3, 116))), (((-126 > 118) % ((((arr_2 [i_0]) <= 5097)))))));
        arr_4 [i_0] [0] = ((((!((max(2047, 5097))))) || (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_14 = (max(var_14, ((((((min(114, -1)))) ? ((var_2 ? (arr_6 [i_1] [i_1]) : (max(var_6, (arr_5 [i_1] [i_1]))))) : var_2)))));
        var_15 = (min(var_15, ((((((arr_5 [i_1] [i_1]) * (arr_6 [i_1] [i_1]))) / ((2055 ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1] [i_1]))))))));
        var_16 = (max((((arr_6 [i_1] [i_1]) * (arr_5 [i_1] [i_1]))), (arr_5 [i_1] [1])));
        var_17 = (max(var_17, ((max((5097 || 14), (arr_5 [9] [i_1]))))));
        var_18 = (min(var_18, ((((((arr_5 [i_1] [i_1]) ^ (arr_5 [i_1] [i_1]))) != ((max(((55 ? 1094160368396130123 : -117)), (arr_6 [i_1] [i_1])))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_19 = var_9;
        arr_9 [i_2] = ((((!(arr_7 [i_2] [i_2]))) ? 46489612 : var_5));
        var_20 |= -117;

        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                arr_15 [i_2] [i_2] [i_3] [i_4] = (arr_6 [i_3] [i_3 - 1]);
                var_21 = (min(var_21, 2042));
            }
            arr_16 [i_3] [i_3] [i_3] = 1537000098;
            var_22 = (min(var_22, var_2));
            var_23 = (arr_1 [i_3 + 1]);
        }
    }
    var_24 = (var_4 * (((min(var_5, (!var_5))))));
    #pragma endscop
}
