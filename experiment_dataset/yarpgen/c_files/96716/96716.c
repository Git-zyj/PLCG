/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((var_8 ? -802372615847890170 : (arr_1 [i_0]))) != (~-32));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [19] = (~(!var_3));
            arr_8 [7] [i_1] = (arr_6 [8] [8] [8]);
        }
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 7;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    arr_20 [i_2] [i_3 - 2] [i_3] [i_4] = ((var_6 ? (((arr_12 [i_3 + 1]) | (arr_12 [i_3 - 2]))) : (arr_12 [i_3 + 3])));
                    var_17 *= ((~((min((arr_1 [i_2]), -29)))));
                }
            }
        }
        var_18 = (min(var_18, ((min((max((arr_17 [i_2] [i_2] [i_2] [i_2]), (arr_16 [i_2] [i_2] [i_2]))), ((~(arr_16 [i_2] [i_2] [i_2]))))))));
        var_19 -= ((((((arr_15 [i_2] [i_2]) <= (arr_15 [i_2] [i_2])))) << (arr_18 [4] [i_2] [i_2])));
        arr_21 [i_2] = ((((arr_0 [i_2]) || ((((arr_1 [i_2]) ? (arr_18 [i_2] [8] [i_2]) : 7))))));
    }
    var_20 = (max(var_20, (var_3 || var_8)));
    var_21 = ((-7 != ((((var_2 && var_3) != var_16)))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            {
                arr_26 [i_5] [10] |= (((((-((45914 ? var_1 : 13))))) ? ((~(arr_24 [i_5] [i_6] [18]))) : 220));
                var_22 = (+-42);
            }
        }
    }
    var_23 += (~var_15);
    #pragma endscop
}
