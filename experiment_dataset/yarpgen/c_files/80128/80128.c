/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_18 = 13984;
        var_19 = ((~(((arr_1 [i_0 - 2] [i_0 - 2]) & (arr_0 [i_0 + 1] [i_0 + 1])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 &= (arr_1 [i_0] [i_0]);
                    var_21 = ((23756 ? (~-19353) : (arr_0 [i_0] [i_0])));
                    var_22 = (arr_5 [i_0 - 3] [i_0 - 2] [i_0 + 1]);
                }
            }
        }
        var_23 = (arr_0 [i_0 - 3] [i_0 - 3]);
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            var_24 = ((max(-3624643419876088698, -1)) * (((((arr_0 [i_3] [i_4]) < (arr_2 [i_3]))))));
            var_25 = 12;
            var_26 = (min((((((((arr_10 [i_4]) ? -1797615452865931618 : (arr_10 [i_4])))) ? (23756 / 23756) : 65472))), (((((40949 ? (arr_6 [i_3]) : (arr_6 [i_3])))) ? (((arr_10 [i_4]) ? 41804 : 1797615452865931618)) : (max((arr_3 [i_3] [i_3] [i_3]), 2))))));
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        {
                            var_27 = (max(((~(~23756))), (((arr_8 [i_3]) ? (((arr_7 [i_5]) ? (arr_12 [i_3] [i_3]) : (arr_6 [i_5]))) : (arr_18 [i_5 + 3] [i_5 + 3] [i_5 + 3] [i_5 + 3] [i_5 + 3] [i_5 + 3])))));
                            var_28 = -14;
                            var_29 = (((-(arr_8 [i_4]))));
                        }
                    }
                }
            }
        }
        var_30 &= (((((((4876 ? 23756 : 61717))) & (min(2, (arr_3 [i_3] [i_3] [i_3]))))) ^ (((arr_5 [i_3] [i_3] [i_3]) ^ (arr_1 [i_3] [i_3])))));
        var_31 = 20119;
    }
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        var_32 &= ((((((-656402007 || (arr_3 [i_8] [i_8] [i_8]))) && -3)) && ((max((min((arr_1 [i_8] [i_8]), (arr_21 [i_8]))), (10998 * 41776))))));
        var_33 = (((max((arr_3 [i_8] [i_8] [i_8]), (arr_3 [i_8] [i_8] [i_8]))) - -27));
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            {
                var_34 *= (arr_1 [i_9] [i_9]);

                for (int i_11 = 2; i_11 < 19;i_11 += 1)
                {
                    var_35 = (((arr_24 [i_11 - 1]) | ((min(-28911, (arr_24 [i_11 + 1]))))));
                    var_36 = (arr_24 [i_9]);
                    var_37 = ((((((((~(arr_28 [i_11 + 1])))) ? (max(-1940291435, -1797615452865931603)) : ((((arr_2 [i_9]) ? 46559 : (arr_4 [i_9] [i_10] [i_11 - 1]))))))) ? ((((min(23758, 41774))) >> (((arr_5 [i_11 - 1] [i_11 - 2] [i_11 + 1]) - 57118425767962704)))) : (3 & 14)));
                }
                var_38 = (((((14 / 26593) - ((max(6, 23760))))) + ((((((arr_4 [i_9] [i_9] [i_9]) / 1797615452865931603))) ? 0 : -8))));
            }
        }
    }
    var_39 = (min(var_3, ((2860387021890739134 ? -var_4 : var_6))));
    var_40 = var_7;
    #pragma endscop
}
