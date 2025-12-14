/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (max((arr_0 [i_0]), (((117 * (arr_0 [i_0]))))));
        var_21 = var_19;
        var_22 = (((min((arr_0 [i_0]), (arr_0 [i_0]))) * 93));
        arr_2 [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((var_13 ? (min((((arr_3 [i_1]) + (arr_4 [17]))), (max((arr_3 [i_1]), (arr_4 [i_1]))))) : ((max((arr_4 [i_1]), (max(var_18, (arr_5 [i_1]))))))));
        var_23 = ((((min(var_13, -3))) / 4406876701288284015));
        var_24 = (max((((arr_5 [i_1]) * 9)), (arr_3 [i_1])));
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {

                for (int i_4 = 3; i_4 < 22;i_4 += 1)
                {
                    arr_16 [i_2] [i_2] [11] [i_2] = (((min(((~(arr_8 [i_2]))), (arr_8 [i_2]))) / -var_18));
                    arr_17 [i_2] [20] [i_2] = ((-(min(var_16, (max(var_12, var_13))))));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_22 [i_2] = (min((arr_12 [i_2]), ((~(min((arr_10 [i_2 - 1]), (arr_8 [i_2])))))));
                    arr_23 [8] [i_3] [i_5] |= ((((((arr_7 [i_2 - 1]) ? (arr_7 [i_2 - 1]) : (arr_7 [i_2 - 1])))) ? (arr_20 [i_2] [i_2] [i_5] [i_5]) : (((1 ? -93 : (arr_12 [22]))))));
                    var_25 = (!208);
                }
                for (int i_6 = 3; i_6 < 21;i_6 += 1)
                {
                    var_26 = (~3139024702502626696);
                    var_27 = arr_24 [i_6 + 2] [i_6] [i_6] [i_6];
                    var_28 = max(var_17, (arr_15 [i_2 + 1] [i_2] [i_6 + 2]));
                }
                var_29 = ((-((var_2 * (arr_25 [i_2] [i_3] [2] [i_2 + 1])))));
                var_30 = ((((((arr_9 [i_2 - 1] [i_3]) ? (arr_13 [i_2]) : (((var_15 ? var_19 : 93)))))) ? (arr_7 [i_2 - 1]) : (min((arr_12 [i_2]), (arr_12 [i_2])))));
            }
        }
    }
    var_31 = var_19;
    #pragma endscop
}
