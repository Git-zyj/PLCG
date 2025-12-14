/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = max((((arr_2 [i_0]) ? ((var_8 ? (arr_2 [i_0]) : (arr_3 [12]))) : (arr_3 [i_0]))), (max((arr_1 [i_0]), (arr_1 [i_0]))));
        var_11 += (min(((47 ? 558446353793941504 : -3449577001674788002)), (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_12 = (min(var_12, (arr_4 [i_1])));
        var_13 = 597998970;
        var_14 = ((-(max(2068879943, ((-1110634352 ? 0 : 27))))));
        var_15 = ((+(((arr_6 [i_1]) ? var_2 : (arr_4 [i_1])))));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_17 [i_2] [i_3] [1] [i_2] = (min((arr_12 [i_2 + 2] [i_2 + 3] [i_2 + 2] [i_2 + 3]), ((min((arr_12 [8] [i_2 + 3] [i_2 + 3] [i_2 + 1]), (arr_12 [i_4] [i_2 + 2] [i_2 + 1] [i_2 + 3]))))));
                        var_16 = (arr_4 [3]);
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {

                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    arr_28 [i_5] [i_6] [i_7] = (arr_1 [i_6]);
                    var_17 = (max((arr_0 [i_7]), -6838));
                }
                var_18 -= (max(((((((arr_5 [i_5]) & (arr_12 [i_6] [i_6] [2] [1]))) <= -32764))), ((~(arr_12 [i_5] [4] [i_5] [i_6])))));
            }
        }
    }
    var_19 = var_6;
    #pragma endscop
}
