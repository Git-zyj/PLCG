/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (max((max((max(var_10, var_4)), ((min((arr_5 [i_0] [i_0]), 127))))), ((((~(arr_5 [i_0] [i_0])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_12 = ((~(min(((-(arr_4 [i_1]))), (~-17)))));
                            var_13 = (arr_8 [i_3] [i_2] [i_1]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_19 [i_0] [i_1] [i_4] = (min((max(18, 255)), (max((max((arr_10 [i_5] [i_0] [i_1] [i_0] [i_0]), var_2)), (arr_5 [i_0] [i_5 + 1])))));
                            arr_20 [i_0] [i_0] [i_1] [i_4] [i_5 - 2] |= (max((max(((max(var_4, (arr_11 [i_5] [i_5 + 1] [i_5 - 1] [i_4])))), (max(9007199254740991, 31)))), (((-((max((arr_10 [i_0] [i_0] [i_4] [i_4] [i_5]), var_0))))))));
                            arr_21 [i_0] [i_1] [i_4] [i_5] = (((((!(arr_0 [i_1] [i_4]))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 23;i_7 += 1)
        {
            {
                var_14 = (max(((max((!var_5), (~127)))), (max(1, 15098987616884971019))));
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                arr_35 [i_6] [i_6] [i_7 + 1] [i_8] [i_9] [i_10] = (-((-(max(18437736874454810625, 18446744073709551615)))));
                                var_15 = ((-(min(((min((arr_25 [i_9] [i_9] [i_9]), (arr_30 [i_6] [i_8] [i_8] [i_9])))), (max(var_5, 18437736874454810624))))));
                            }
                        }
                    }
                }
                var_16 = (min((max(2147483647, 250)), (((!(!var_10))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            {
                var_17 = (max(var_17, (--var_6)));
                var_18 |= (max(((-((-(arr_15 [i_12] [i_11] [i_11]))))), ((~(max(1744594275, var_5))))));
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 15;i_15 += 1)
                        {
                            {
                                arr_49 [i_14] [i_12] [i_13] [i_14] [i_14] [i_12] = (-(min((max(var_8, (arr_36 [i_11]))), ((max(255, (arr_28 [i_11] [i_12] [i_13] [i_14])))))));
                                var_19 = (max(var_19, -127));
                                var_20 = (max(var_20, (max((max((max((arr_17 [i_11] [i_13] [i_13] [i_14]), var_3)), (max(var_0, (arr_12 [i_14] [i_13] [i_12] [i_11]))))), ((min(2113929216, 1279410284)))))));
                                arr_50 [i_14] [i_14] [i_14] [i_14] [i_14] = (max((max((((!(arr_4 [i_15])))), (~9007199254741001))), (((-(max(var_0, var_8)))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_16 = 0; i_16 < 15;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 15;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 15;i_18 += 1)
                        {
                            {
                                var_21 = (!15109);
                                var_22 = (min((max(1, ((min(42, var_5))))), (((~(min((arr_45 [i_11] [i_12]), 1)))))));
                                var_23 = (!-139);
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (min((max((~var_11), -var_8)), (~var_4)));
    var_25 = (min(((((min(1914, var_7))))), (max((max(var_3, var_5)), ((max(var_8, var_6)))))));
    #pragma endscop
}
