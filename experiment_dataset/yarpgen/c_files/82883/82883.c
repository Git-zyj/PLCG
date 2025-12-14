/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_14 ^= var_1;
                var_15 = (min(((((arr_6 [i_1] [i_1] [i_1]) / -4664269529865499763))), 15562857339197843904));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_16 = (min(var_16, ((((((min(var_1, (arr_3 [i_1]))) ? (arr_0 [i_0]) : ((var_5 ? var_12 : (arr_1 [10]))))))))));
                    var_17 = (arr_0 [1]);
                }
                for (int i_3 = 3; i_3 < 7;i_3 += 1) /* same iter space */
                {
                    var_18 = (max(var_18, (((!((((arr_6 [i_3 + 2] [i_3 - 2] [8]) ? (((var_12 ? var_4 : (arr_9 [8] [8] [8] [i_3])))) : (min(23311, 4294967295))))))))));
                    var_19 = (max(var_19, (((max((arr_12 [6] [i_3 - 1]), (arr_12 [10] [i_1 - 1])))))));
                    var_20 = (((max(4664269529865499792, 242))) ? 19648 : 12398353697902678995);
                }
                /* vectorizable */
                for (int i_4 = 3; i_4 < 7;i_4 += 1) /* same iter space */
                {
                    var_21 = (((arr_4 [i_1]) ? var_2 : (arr_4 [i_1])));
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_22 = ((((arr_20 [i_0] [i_1] [i_4 - 1] [6] [6]) ? 10519867419503159292 : 0)) - -2576487170908161288);
                                var_23 = arr_17 [i_0] [i_4] [i_6];
                                var_24 = (max(var_24, (~var_12)));
                            }
                        }
                    }
                    var_25 ^= ((10782576127189272791 ? 1054488446594918533 : 242));
                }
                /* vectorizable */
                for (int i_7 = 3; i_7 < 7;i_7 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_26 = (1 <= 6117480666909413629);
                                arr_30 [0] [i_8] [i_1] [i_1] [i_0] [i_0] = 14318806137781200794;
                            }
                        }
                    }
                    var_27 = (max(var_27, (arr_19 [4] [7] [i_7] [i_7])));
                    var_28 &= ((18446744073709551615 + (arr_14 [i_0] [i_7] [i_7])));
                }
                var_29 = (((((((12479748987919160243 ? 0 : (arr_29 [i_1] [i_1] [i_1] [i_1] [7]))) / ((12088 ? var_6 : var_11))))) ? (var_0 % var_9) : (max(1, 5180821287863614091))));
            }
        }
    }
    var_30 = 5098359210133891638;
    #pragma endscop
}
