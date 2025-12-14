/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, 1));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (((((-(arr_0 [i_0 + 1])))) ? ((max(var_13, 18))) : (((((arr_1 [i_0]) || (arr_1 [i_0 + 2])))))));
        var_17 = (min(var_17, ((min((--262143), (((!(87 > 8008548571035016963)))))))));
        var_18 = (~1);
        var_19 = (~1);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_5 [i_1] = (+((((((arr_4 [7] [i_1]) ? (arr_3 [12] [i_1]) : (arr_3 [i_1] [i_1]))) < (!105468852944851149)))));
        var_20 = (((arr_4 [i_1] [i_1]) ? (arr_4 [i_1] [i_1]) : -178782488));
    }

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 7;i_5 += 1)
                {
                    {
                        var_21 &= (min((arr_12 [i_5 + 3] [i_3] [i_3] [i_5]), (((arr_4 [i_2] [i_2]) ? (((1 ? var_12 : (arr_9 [i_5] [i_3])))) : (-9223372036854775807 - 1)))));
                        arr_14 [i_2] [8] = (((-9223372036854775807 - 1) ? ((((91 || var_5) * (((9223372036854775807 >= (arr_10 [0]))))))) : (((arr_6 [i_4]) ? var_5 : (arr_4 [15] [i_2])))));
                        arr_15 [i_2] [i_3] [i_4] [4] [i_2] = ((~((((arr_11 [i_5] [i_5 - 2] [i_2] [i_2]) < (-9223372036854775807 - 1))))));
                        arr_16 [i_2] [i_3] [i_4] = ((((((((arr_10 [i_4]) | -105468852944851150))) ? var_6 : ((3208314142 ? 105468852944851161 : (arr_8 [0] [i_3] [i_4]))))) > (arr_13 [i_2] [i_5 + 2] [7] [i_5])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_22 = (((((((arr_21 [i_2] [i_6] [i_7] [i_7] [i_7] [i_8]) ? (arr_11 [i_8] [1] [i_6] [i_2]) : 1)))) > ((((arr_13 [i_2] [i_6] [i_7] [i_2]) != ((((arr_18 [i_2]) || var_15))))))));
                        arr_23 [i_2] [i_2] [i_7] [i_8] [1] [i_2] = 1;
                        arr_24 [i_2] [i_7] = ((!(arr_7 [i_2])));
                        arr_25 [i_7] [1] = -1025234625;
                    }
                    arr_26 [5] [i_7] [i_6] [1] = ((((var_9 < var_8) ? (arr_13 [i_2] [i_2] [1] [i_7]) : var_15)));
                }
            }
        }
        var_23 = 16;
        arr_27 [i_2] = (arr_6 [i_2]);
    }
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        var_24 = (min((((-9223372036854775807 - 1) - (arr_30 [i_9]))), -105468852944851150));
        arr_31 [i_9] = 3221225472;
    }
    var_25 = var_14;
    #pragma endscop
}
