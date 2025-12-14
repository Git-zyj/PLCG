/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((2712048901 | (min(27996, (min((arr_2 [i_0]), 1713236170))))));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_20 = -30;
                        var_21 ^= min(13325595084172823305, ((((arr_6 [i_2] [i_2] [i_2 - 1]) && 5121148989536728310))));
                        var_22 = (min(var_22, ((((((3006110117714610146 ? var_7 : 3272477383)) ? var_14 : ((((arr_13 [i_0] [i_1] [i_2] [i_3] [i_3]) && 1022489922)))))))));
                        arr_14 [i_0 + 4] [i_1] [i_2] [0] [i_0 + 4] [i_2] = (((((max((arr_6 [i_0] [i_1 - 3] [i_0]), 1022489922)) < ((((var_7 && (arr_2 [i_0]))))))) ? (min((min((arr_11 [i_0 + 2] [i_1] [i_0 + 2]), (arr_2 [i_1]))), (arr_1 [i_0]))) : (min((arr_6 [i_0] [i_0] [i_2]), 13325595084172823305))));
                        var_23 = -32744;
                    }
                }
            }
        }
        var_24 = ((!((max((((-(arr_5 [i_0] [i_0])))), (max(5121148989536728304, (arr_7 [i_0]))))))));
        var_25 = (min(var_25, (arr_9 [i_0 + 3] [i_0 + 3])));
    }
    for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] &= var_3;
        var_26 -= (!(arr_6 [i_4 + 3] [i_4] [i_4]));
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            {
                var_27 *= 5121148989536728314;
                var_28 = ((var_14 ? (min(((min(-13667, (arr_22 [i_5] [i_6] [i_5])))), -var_5)) : (arr_22 [i_5] [i_5] [i_5])));
                arr_23 [3] [2] [3] = (((3272477375 && 1022489938) ^ ((((~0) < (~-1))))));
            }
        }
    }
    var_29 = var_11;
    var_30 += (var_17 + var_12);
    var_31 = ((((max(var_12, (var_19 + 1022489912)))) && (((max(var_18, 0)) < -3272477383))));
    #pragma endscop
}
