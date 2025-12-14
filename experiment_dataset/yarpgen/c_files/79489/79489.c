/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_9));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_18 = ((var_14 ? (arr_1 [i_0]) : (((arr_1 [i_0]) | 1428377839))));
        arr_3 [i_0] = (min((((min(var_3, (arr_0 [4]))))), ((2866589445 & (-2147483647 - 1)))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_19 = (((var_0 ? (arr_12 [i_0] [i_0] [i_1] [i_0] [i_3]) : (arr_5 [i_0] [i_1] [i_2]))));
                        var_20 = ((((((min(var_1, 6333794987632155786))) ? var_8 : var_0)) / ((0 ? 12112949086077395800 : 1331485826))));
                        var_21 = (~-5877);
                    }
                }
            }
            arr_13 [i_0] [2] [i_1] = var_1;
            var_22 += ((min(12112949086077395800, 3196385866)));
        }
        var_23 = (min(825547070, (min(((min(1700351865, var_15))), 7143448375129900392))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_24 = (max(var_24, ((~(arr_16 [i_4] [i_4] [i_5])))));
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 9;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    {
                        arr_24 [0] [i_6] [i_6] [i_6] [2] |= ((~(((arr_18 [i_7]) ? (arr_6 [i_6]) : var_12))));
                        var_25 = (((arr_8 [i_6 - 1] [i_6 - 2]) - (arr_18 [i_6 - 2])));
                        arr_25 [i_4] [i_7] [1] [i_7] = arr_22 [i_5] [i_6];
                        var_26 *= ((~(var_7 + var_11)));
                        var_27 -= (arr_17 [i_6 - 1] [i_6 - 2]);
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            var_28 = (max(var_28, ((((arr_1 [6]) != var_15)))));
            var_29 = (max(var_29, ((((arr_21 [i_4] [i_4] [i_8] [i_8]) ^ (arr_4 [i_4] [i_8]))))));
            var_30 = (min(var_30, var_8));
            var_31 = ((var_16 ? (var_7 && 23333) : -1));
        }
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            arr_34 [i_4] = ((2866589456 >= (arr_19 [i_4] [i_4] [4] [i_9])));
            var_32 = (((arr_11 [i_4] [i_4] [i_4] [i_4]) | -5877));
        }
        var_33 = var_11;
        arr_35 [i_4] = (((((29883 ? var_14 : 136))) < (arr_23 [4])));
    }
    var_34 = (((min(var_13, var_0)) * (((((((28576 ? -58 : 105))) == var_1))))));
    #pragma endscop
}
