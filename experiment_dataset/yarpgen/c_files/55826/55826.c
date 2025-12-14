/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_9 == ((min(var_5, var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = (max(((-((-(arr_1 [i_0]))))), ((max((arr_4 [i_1 + 1] [i_0]), (arr_4 [i_1 - 1] [i_0]))))));
                arr_5 [i_0] [7] [i_1 + 1] = (min(((-1 ? ((23330 ? (-2147483647 - 1) : (arr_0 [i_0] [i_1 - 1]))) : (arr_4 [i_0] [i_0]))), -1));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_12 = ((((min(-29695, (max(var_5, 23330))))) ? (-23350 & 5841081475605982273) : (((~(arr_11 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_2]))))));
                            var_13 += ((((min((-2147483647 - 1), 69))) | (min(var_7, (min(3317984712, 3317984712))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_14 = (((max(var_7, (arr_14 [i_0] [i_0]))) >> ((((~(((var_0 + 2147483647) >> (((arr_14 [i_0] [14]) - 2027935168)))))) + 212))));
                                var_15 = ((-(arr_2 [i_0])));
                            }
                        }
                    }
                }
                var_16 = (min(var_16, ((((arr_11 [11] [i_0] [i_1 - 1] [i_1 + 1]) && (((14173861549318324257 ? 1 : (arr_3 [i_0] [1] [i_1 + 1])))))))));
            }
        }
    }

    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        arr_22 [i_7] = (max((max(((max(var_2, var_2))), 65535)), 1));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 14;i_9 += 1)
            {
                {
                    var_17 = (((~(arr_26 [i_7]))));
                    var_18 = (min(var_18, 102));
                    var_19 = (arr_23 [i_7] [i_7]);
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 15;i_11 += 1)
                        {
                            {
                                var_20 = (min(var_8, ((min(((min(var_3, var_2))), ((0 ? -1 : var_7)))))));
                                arr_35 [i_7] [4] = ((-(((min((arr_26 [i_7]), var_3))))));
                                var_21 = var_0;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
