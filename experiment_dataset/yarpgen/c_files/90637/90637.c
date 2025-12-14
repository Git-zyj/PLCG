/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (min(var_2, var_1))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_11 = (min(47684, var_0));
            var_12 = var_3;
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_13 = (min(4294967295, (((~(arr_3 [i_0]))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        var_14 = ((-((+((5 ? (arr_9 [12] [3] [i_0]) : (arr_8 [i_0] [i_2] [i_0])))))));
                        arr_10 [i_0] [i_2] [i_0] [4] = (min(((min(var_3, var_9))), (min(var_2, 849361692))));
                        var_15 = (max(var_15, 849361692));
                        arr_11 [i_0] [i_0] = (min(((~(!var_3))), 22722));
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            arr_14 [i_5] [i_0] [19] = ((~(((var_5 | 20948) ? (~var_3) : ((min(119, (arr_9 [12] [i_5] [i_0]))))))));
            var_16 = (max(var_16, (((((max(3408, (arr_3 [i_5])))) ? var_6 : (-25 && 0))))));
        }
        var_17 -= (((((arr_12 [18] [18]) ? (arr_12 [22] [i_0]) : var_2)) * (((64803 ? (arr_12 [14] [i_0]) : 246)))));
        var_18 *= (arr_5 [i_0] [i_0] [i_0]);
        var_19 = (max(var_19, ((((((12 ? (-86 ^ 1111617365) : (~-8376)))) ? 18269 : var_3)))));
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        var_20 -= arr_13 [19] [19];
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 9;i_10 += 1)
                        {
                            {
                                arr_29 [i_6] [7] [i_8] [i_9] [7] [i_10 + 1] &= (((238 ? 97 : 6938)));
                                var_21 = (max(var_21, (max(((var_8 ? var_0 : var_7)), (arr_25 [i_10 - 1] [i_10 + 2] [i_10 - 1] [i_10] [i_10 + 2])))));
                                var_22 = (max(var_22, -5629));
                                var_23 = (max(var_23, ((~((~(arr_27 [i_6] [i_10 - 1] [i_10 + 2] [3] [i_10 + 1] [i_10 + 2] [0])))))));
                                arr_30 [i_6] [i_6] [4] [4] [i_6] = ((min(var_6, ((min(-2386, var_0))))));
                            }
                        }
                    }
                    var_24 = (max(var_24, ((min(3018122775, ((max(-38, 5))))))));
                }
            }
        }
    }
    var_25 *= (min(var_5, ((var_9 ? ((max(var_5, 65535))) : (!var_7)))));
    var_26 = ((-(min(3562565911, ((var_9 ? 27288 : var_7))))));
    #pragma endscop
}
