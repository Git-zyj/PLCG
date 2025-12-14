/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += ((var_9 + (((var_6 != ((96 ? 63 : var_2)))))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                var_17 = (arr_3 [i_0 + 1] [8] [8]);
                var_18 = (arr_2 [i_1]);
            }
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {

                /* vectorizable */
                for (int i_4 = 3; i_4 < 8;i_4 += 1)
                {
                    var_19 = arr_4 [i_0] [i_1] [i_3 + 1];
                    arr_13 [i_3] [i_3] [i_3] [i_3] [1] [i_0] = (arr_8 [i_3] [i_1] [i_1]);
                    var_20 = (((arr_4 [i_3 - 1] [i_3] [i_4 + 1]) ? var_0 : (arr_4 [i_3 - 1] [i_4] [i_4 + 1])));
                }
                /* vectorizable */
                for (int i_5 = 3; i_5 < 8;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        var_21 = (arr_14 [i_0] [i_0] [4] [i_0 - 1]);
                        var_22 = (((arr_6 [i_6] [i_1] [i_0 - 1]) ? var_2 : (arr_9 [0])));
                    }
                    var_23 = (arr_9 [i_0]);
                    arr_18 [0] [i_1] [i_1] [0] [0] |= (arr_14 [i_0] [i_0] [i_0] [i_0]);
                }
                for (int i_7 = 3; i_7 < 7;i_7 += 1)
                {
                    arr_22 [i_1] [i_3] = (arr_17 [i_0] [i_3] [4] [i_3] [5]);
                    var_24 = (max(var_24, ((((arr_16 [i_0] [i_0 + 1] [i_0 - 1] [i_0]) && ((!(arr_6 [i_0 + 1] [i_0 - 1] [i_3]))))))));
                }
                var_25 = ((((-(arr_21 [i_0] [i_0 + 1] [i_3] [2]))) * var_8));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 7;i_9 += 1)
                    {
                        {
                            var_26 = (((min((arr_3 [i_0] [i_0] [i_0 + 1]), (arr_21 [i_0 + 1] [4] [i_3] [i_0 + 1])))) ? (((((-(arr_4 [i_3] [i_1] [i_3]))) > ((11 ? var_7 : 977400495))))) : (arr_17 [i_0] [i_3] [i_3] [i_3] [i_9]));
                            var_27 = (max(var_27, ((((((arr_0 [i_3 + 1] [i_3 + 1]) ? (arr_0 [i_3 - 1] [i_8]) : (arr_0 [i_3 - 1] [1])))) ? ((~((var_0 & (arr_17 [i_0] [i_8] [i_0] [i_0] [i_9]))))) : ((+(((arr_9 [i_0]) ? -64 : (arr_15 [i_9 - 1] [i_8] [i_3] [i_1] [i_0 + 1])))))))));
                            var_28 = (((var_9 != var_12) ? var_2 : ((((!(arr_24 [i_0] [i_1] [i_3] [i_8] [i_9 + 3] [i_9 + 1])))))));
                            var_29 = 4055928063580861808;
                        }
                    }
                }
                var_30 = -var_11;
            }
            var_31 = (((arr_9 [i_0 - 1]) > ((((arr_9 [i_0 - 1]) <= (arr_9 [i_0 - 1]))))));
            var_32 = (((arr_14 [i_1] [i_1] [i_0 - 1] [i_0 + 1]) ? var_6 : 52902));
        }
        for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
        {
            var_33 |= -4055928063580861808;
            /* LoopNest 2 */
            for (int i_11 = 2; i_11 < 9;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 8;i_12 += 1)
                {
                    {
                        var_34 = (max(var_34, (((var_6 != (arr_25 [i_0] [i_10] [i_10] [i_11 - 1] [i_11 - 2] [i_0]))))));
                        var_35 = ((22383 | ((77 ? 1860873111 : (((max((arr_25 [i_0] [7] [i_10] [i_10] [i_11] [7]), -126))))))));
                        var_36 = (arr_3 [i_0] [1] [i_0 + 1]);
                        var_37 = ((-((max((arr_33 [i_12 + 2] [i_11 + 1] [i_0 + 1] [i_12]), var_11)))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 10;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    {
                        var_38 = (((((-(arr_19 [i_14] [i_10])))) ? (arr_1 [i_14]) : -7047845097672354064));

                        for (int i_15 = 0; i_15 < 10;i_15 += 1)
                        {
                            var_39 -= (arr_39 [i_0] [i_0] [i_0] [i_0] [9] [4]);
                            var_40 = (arr_12 [i_14]);
                        }
                    }
                }
            }
            var_41 -= (arr_1 [i_0 - 1]);
        }
        var_42 = (arr_29 [2] [i_0 - 1] [i_0 - 1] [i_0 - 1]);
    }
    #pragma endscop
}
