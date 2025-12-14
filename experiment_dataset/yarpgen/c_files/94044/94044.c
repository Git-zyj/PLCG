/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_10 = (min((((((!(arr_4 [i_0] [i_0]))) ? 255 : 24846))), (min((arr_3 [i_1 + 1] [7]), 3631412100))));

                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        var_11 = (((((3631412100 ? -1 : ((29 ? 84 : 0))))) || 59955));
                        arr_9 [i_2] [i_2] = (min((~var_5), (min((arr_2 [i_1 + 1] [i_1 + 1] [i_3 + 3]), (min((arr_2 [i_0] [i_0] [i_0]), (arr_4 [i_2] [i_2])))))));
                        arr_10 [i_2] [i_2] [i_2] [i_2] [i_2] = (min(((((arr_3 [i_3 + 1] [i_3 + 3]) ? (arr_3 [i_3 - 1] [i_3 - 1]) : (arr_3 [i_3 + 1] [i_3 - 1])))), (arr_1 [i_0])));
                    }
                    var_12 = ((((((((arr_7 [i_2] [9] [i_2]) & var_9))) ? (arr_5 [i_0] [i_1 + 1]) : (((arr_4 [i_0] [i_0]) ? (arr_6 [i_0]) : var_4)))) >= ((((!(((17494871731341676885 ? 127 : -4912484094764383185)))))))));
                }
            }
        }
        var_13 *= ((((((255 / 255) ? (((-5431438542154984122 ? (arr_8 [i_0] [i_0] [i_0] [3]) : 4294967280))) : 13407074662629901384))) ? (min((((!(arr_0 [i_0])))), (arr_2 [i_0] [i_0] [i_0]))) : ((max((arr_5 [i_0] [i_0]), (!var_6))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_14 &= arr_11 [i_4];
        var_15 = ((!((!(arr_11 [i_4])))));
    }
    var_16 = (((((((var_7 ? var_8 : var_6))) ? (var_7 || var_9) : var_3))) <= ((((-1689017461 ? 11 : 2666863788003663362)) * ((0 ? 1448096983 : 13407074662629901399)))));
    #pragma endscop
}
