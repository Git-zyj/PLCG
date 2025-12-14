/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (!var_1)));
    var_14 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = (min((((((1 ? var_3 : var_5)) >= ((((arr_1 [i_0]) ? var_0 : var_7)))))), (min((((arr_0 [i_0]) | var_4)), var_6))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_16 *= (((((~(min(var_1, (arr_5 [i_0] [i_0] [13])))))) ? (((-(arr_3 [i_3 - 2])))) : var_9));
                            var_17 -= ((~(arr_9 [i_0] [10] [i_2])));
                            var_18 = (((((~(arr_7 [i_3])))) ? ((-(arr_7 [i_0]))) : (!var_12)));
                            arr_12 [i_0] [i_0] [i_0] [i_0] = (min(((max(((~(arr_3 [14]))), var_1))), ((~(min((arr_5 [i_0] [13] [i_0]), (arr_0 [i_0])))))));
                        }
                    }
                }
                var_19 = ((!(arr_8 [i_0] [i_0])));
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        {
                            arr_17 [i_5] [i_0] [i_0] [i_0] = ((((~(arr_16 [i_4 + 1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1]))) >= (((!(arr_5 [i_1] [i_0] [i_0]))))));
                            arr_18 [i_0] [i_0] [13] [i_0] [i_4] = (max((((((var_0 ? var_1 : (arr_6 [i_0] [10]))) < ((-(arr_3 [i_4])))))), (((arr_4 [i_0]) ? (arr_4 [i_0]) : (arr_4 [i_0])))));
                            arr_19 [i_0] [i_0] [i_0] [i_0] = (((var_1 + var_8) ? (~var_3) : (arr_1 [i_0])));
                            arr_20 [i_0] [i_0] [i_1] [i_4] [i_5] = (((((arr_8 [i_5 - 1] [i_1 + 2]) ? var_6 : (arr_2 [i_0]))) >= (-30 >= 541539481)));
                            var_20 -= ((!((((!var_6) ? (((-115 ? -55 : -35))) : (min(3296240748, -1523039684)))))));
                        }
                    }
                }
            }
        }
    }
    var_21 = (min((min((32752 + -116), var_12)), (((((var_6 ? var_12 : var_2))) ? var_11 : ((var_4 ? var_8 : var_3))))));
    /* LoopNest 3 */
    for (int i_6 = 4; i_6 < 16;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 14;i_8 += 1)
            {
                {

                    for (int i_9 = 1; i_9 < 16;i_9 += 1)
                    {
                        var_22 -= ((((!(~16536644047924966009))) ? (!-var_5) : (((arr_22 [8] [8]) ? var_6 : var_3))));
                        var_23 *= (!((max(6244293371114000272, 55))));
                        arr_29 [i_6] [i_8] [i_7] [i_6] = (max(((((((arr_23 [i_6]) ? 3 : (arr_25 [i_6] [i_7]))) >= (arr_25 [i_6] [i_7 + 2])))), var_1));
                        var_24 = ((~(((arr_27 [i_6] [i_7 - 1] [12] [i_8 + 2]) | (arr_27 [i_7] [i_7 - 1] [i_7] [i_8 + 2])))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        arr_34 [i_6] [i_8 - 1] [i_7] [i_6] = ((arr_33 [i_6 - 3] [i_7 - 1] [i_7 - 1] [i_6] [i_6] [i_10]) ? ((114 ? (arr_31 [i_8]) : var_7)) : ((var_8 ? var_5 : var_6)));
                        var_25 = -541539498;
                        var_26 = (min(var_26, ((((arr_30 [10] [i_7] [4] [16]) ? (((!(arr_33 [i_6] [4] [2] [16] [i_10] [i_7 + 1])))) : ((var_1 ? (arr_27 [i_10] [1] [i_7 + 1] [i_6 - 1]) : var_5)))))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        arr_37 [i_6] [i_7] [i_6] [i_11] = 53;
                        var_27 -= ((~(arr_33 [i_6] [i_6] [i_6] [10] [i_6 - 2] [i_7 - 1])));
                        var_28 *= (arr_36 [i_8] [i_8 - 1] [i_8] [i_8 + 1]);
                        var_29 = ((-(arr_31 [i_7 + 1])));
                    }
                    arr_38 [i_6] [i_7] [i_8 - 1] = (var_8 ? (((-117 ? 126 : -2147483639))) : ((((min(var_9, (arr_33 [i_6] [1] [i_6] [i_6] [i_6] [i_6])))) ? ((var_3 ? (-2147483647 - 1) : (arr_21 [i_7 + 2]))) : var_0)));
                    arr_39 [i_6] [i_6] [i_6] = (((arr_35 [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_6 - 1] [i_6 - 2]) ? (((arr_35 [i_7 - 1] [i_7 + 2] [i_7 - 1] [i_6 - 1] [i_6 - 2]) ? var_11 : var_12)) : (((min((arr_35 [i_7 - 1] [i_7 - 1] [i_7 + 2] [i_6 - 4] [i_6 - 3]), (arr_35 [i_7 + 2] [i_7 - 1] [i_7 + 1] [i_6 - 4] [i_6 - 2])))))));
                    var_30 = (max((!24), ((0 ? -116 : ((-1000330222 ? 980140330 : -1523039695))))));
                }
            }
        }
    }
    #pragma endscop
}
