/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 = (((((((-(arr_7 [i_1]))) % 1))) ? 1 : var_8));
                    var_14 = var_6;
                    arr_8 [i_1] [i_2] = (arr_2 [i_0] [i_0]);
                    var_15 = (((min((arr_6 [i_2 - 1] [i_2] [i_2 - 1]), (max(3875973084656177459, var_9)))) - ((3875973084656177456 ? (((arr_4 [i_0] [i_2 - 1]) ? -4771142427017140875 : 1)) : ((min(1, 769390818)))))));
                }
            }
        }
        arr_9 [i_0] [13] = (max((((~61415) ? (arr_2 [i_0] [i_0]) : (var_0 & 1))), (arr_1 [i_0])));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = var_1;

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_16 = (arr_13 [i_3]);
            /* LoopNest 3 */
            for (int i_5 = 4; i_5 < 7;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        {
                            arr_27 [i_3] = (min((min((((~(arr_4 [i_3] [i_4])))), var_3)), (arr_17 [i_3] [i_3] [i_3])));
                            arr_28 [i_3] [3] [i_5] [i_6] [i_7] = (max((arr_16 [i_5 + 1] [i_5 - 4] [i_5 + 4]), (min(((26844 ? var_2 : var_8)), var_8))));
                        }
                    }
                }
            }
            arr_29 [i_4] = 9483462071409467030;
            var_17 = (((((((1 ? (arr_21 [i_3] [i_4] [i_4] [i_4]) : (arr_2 [i_3] [i_3]))) << (var_10 - 166)))) ? (((max((arr_19 [i_3] [i_3] [i_3]), 152)) >> (4121 - 4070))) : ((((((var_3 && (arr_12 [i_3]))) && var_3))))));
        }
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        var_18 = ((+(((arr_7 [i_8]) | (~var_6)))));
        var_19 = 5948363597227681894;
        var_20 = (min(((~(arr_6 [i_8] [i_8] [i_8]))), 1));
        var_21 = (max((arr_31 [i_8] [i_8]), 165));
    }
    var_22 = 2257472398569635746;
    var_23 = var_2;
    var_24 = (((max((((var_7 ? 1694233806 : var_7))), ((5948363597227681876 << (1 - 1))))) << (((min(var_10, (max(var_3, var_7)))) - 168))));
    #pragma endscop
}
