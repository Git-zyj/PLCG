/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((!(1536 || 4681334526113462546)));
        var_18 = (max(var_18, 221));
        var_19 = max((((arr_2 [i_0] [i_0]) ^ var_5)), ((((arr_2 [i_0] [i_0]) < var_14))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 3; i_2 < 19;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                var_20 = (max(var_20, (((-(arr_1 [i_3]))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_21 = (max(var_21, (((var_17 && ((var_7 == (arr_2 [i_2 - 1] [i_3 + 2]))))))));
                            arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
                        }
                    }
                }
            }

            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                var_22 = (max(var_22, var_16));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 22;i_8 += 1)
                    {
                        {
                            arr_27 [i_7] [i_2] [i_6] [i_7] = (min((max(((min(-26799, (arr_14 [i_1] [i_6] [i_7] [i_8])))), (((arr_16 [i_1] [13] [i_6] [i_6] [i_7] [i_7] [i_7]) ? 26803 : (arr_16 [2] [i_2] [0] [8] [i_2] [i_2 + 3] [i_2]))))), (((221 + (arr_23 [i_8] [i_7] [i_6] [i_6] [i_2 - 1] [15]))))));
                            arr_28 [i_1] [i_1] [3] [i_6] [i_7] [2] = 4088;
                            arr_29 [i_1] [1] [11] [i_7] [17] = ((+((~((var_7 ? (arr_7 [6]) : var_15))))));
                        }
                    }
                }
                var_23 = (max(var_23, (((((arr_5 [i_1]) ? ((min((arr_10 [i_2] [i_6]), (arr_12 [i_1] [12])))) : (max((arr_8 [17] [i_2] [i_6]), var_12))))))));
            }
            arr_30 [i_1] [i_1] [i_2] = -17179836416;
            var_24 = (max(var_24, (((min(var_3, (((arr_2 [i_1] [i_2 - 2]) ? var_11 : 12501307336454006242))))))));
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 21;i_10 += 1)
                {
                    {
                        var_25 = (((((!(-2147483647 - 1)))) != ((min(var_11, (arr_26 [i_1] [6] [i_1] [i_10] [i_9 - 2] [i_10 - 1]))))));
                        var_26 = (max(var_26, (((-6681574760303421869 ? (min(var_2, (arr_13 [i_1] [i_9 + 1] [1] [i_2 - 1]))) : ((((59 / var_7) > var_11))))))));
                    }
                }
            }
        }
        var_27 = (max(var_27, -1537));
    }
    var_28 = (~var_5);
    #pragma endscop
}
