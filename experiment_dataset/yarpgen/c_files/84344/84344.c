/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = ((~(arr_3 [i_0] [i_1 + 3] [i_1])));
                var_17 = var_3;
                arr_6 [i_0] [i_1] [i_1] = (~16612542672408905754);
                arr_7 [i_1] = (max(((((~(arr_5 [i_1] [8] [i_0]))))), ((16612542672408905754 ? (arr_5 [i_1] [i_1 + 3] [i_1]) : (arr_5 [i_1] [i_1 + 3] [i_1])))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_18 -= ((((((arr_10 [i_2]) ? (arr_8 [i_2]) : (arr_8 [i_2])))) ? ((-(arr_8 [i_2]))) : (((arr_8 [i_2]) * (arr_9 [i_2])))));
        arr_11 [i_2] = (!12911320152153728482);
        var_19 = (arr_10 [i_2]);
        arr_12 [i_2] [i_2] = (max(12839656809526549049, 15653));
        var_20 = (min(var_20, (((+((max((arr_8 [i_2]), (arr_8 [i_2])))))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_21 = ((!(arr_8 [i_3])));
        arr_15 [i_3] = (((arr_9 [i_3]) ? (arr_9 [i_3]) : (arr_9 [i_3])));
        var_22 = -1357223052;
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 11;i_4 += 1)
    {
        arr_18 [i_4] = var_12;
        var_23 ^= (((arr_0 [i_4 + 1] [i_4 + 1]) ? (arr_0 [i_4 + 1] [i_4 + 1]) : (arr_0 [i_4 + 1] [i_4 + 1])));
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    arr_26 [6] [6] [i_6] [i_6] = ((((min((arr_5 [i_6] [i_6] [i_6 - 3]), ((((arr_0 [i_5] [i_5]) >= (arr_19 [i_5]))))))) >= (!var_12)));
                    var_24 = ((var_1 ? (((~(arr_8 [12])))) : (min((arr_9 [i_5]), (arr_21 [i_6] [i_6] [i_7])))));
                    var_25 = (((((~(arr_1 [i_6 - 1] [i_6 - 1])))) ? (((arr_1 [i_6 - 1] [5]) ? (arr_1 [i_6 - 3] [4]) : (arr_1 [i_6 + 1] [i_6 + 1]))) : (((arr_1 [i_6 - 3] [i_6 - 2]) + (arr_1 [i_6 + 1] [i_6 + 1])))));
                }
            }
        }
    }
    #pragma endscop
}
