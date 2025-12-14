/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_12 = (((arr_6 [i_0] [i_0] [i_1]) ? (arr_6 [i_0] [i_1] [i_1]) : (arr_6 [1] [i_1] [i_1])));
                    arr_8 [i_1] [i_1] [i_1] [i_1] = 4294967280;
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] [i_1] [i_1] [i_4] = var_1;
                            var_13 = (((min((6 ^ var_3), (!var_7))) + (149 > var_0)));

                            for (int i_5 = 0; i_5 < 17;i_5 += 1)
                            {
                                var_14 = (max((((-(((arr_3 [i_3]) ? 4294967290 : (arr_13 [2] [i_1] [2])))))), ((var_0 / (arr_11 [i_0] [i_0] [i_1] [i_4])))));
                                var_15 = (max(var_15, (arr_0 [i_1] [i_4])));
                            }
                            for (int i_6 = 0; i_6 < 17;i_6 += 1)
                            {
                                var_16 = (((arr_5 [i_0] [i_4]) & (((!((min(var_10, var_4))))))));
                                var_17 -= (arr_17 [i_1] [i_3] [i_3] [i_4] [i_6] [i_4]);
                                var_18 = (arr_21 [i_1]);
                            }
                            for (int i_7 = 0; i_7 < 1;i_7 += 1)
                            {
                                var_19 = (min(((~(max((arr_23 [i_0] [i_0] [i_3] [i_4] [i_0] [i_4] [i_1]), var_7)))), var_9));
                                arr_25 [i_0] [i_3] [i_1] = ((!(arr_13 [i_4] [i_1] [i_4])));
                            }
                        }
                    }
                }
                arr_26 [i_1] = ((((((var_10 == ((var_5 >> (4294967295 - 4294967288))))))) | ((32755 ? ((var_10 ? 4294967280 : var_1)) : (arr_10 [i_1] [i_1])))));
            }
        }
    }

    for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
    {
        arr_30 [i_8] = (((((max((0 && var_5), var_7)))) / (arr_17 [i_8] [16] [i_8] [i_8] [i_8] [8])));
        var_20 = (min(var_20, ((((var_4 && var_2) ? (~0) : (arr_22 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 15;i_11 += 1)
                {
                    {
                        var_21 = (min(var_21, (((((~(arr_21 [8]))) != ((((var_11 >= (arr_14 [i_8] [i_8] [i_10] [i_8]))))))))));
                        var_22 = (min(var_22, ((min(((!(arr_5 [i_9] [i_10]))), (((!var_9) && ((1 && (arr_0 [i_8] [i_9]))))))))));
                    }
                }
            }
        }
        var_23 += 212;
    }
    for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
    {
        var_24 = (max(var_24, (+-1352376695)));
        var_25 = var_2;
        arr_41 [i_12] = ((var_8 & (((~(arr_1 [i_12]))))));
        arr_42 [i_12] = (arr_10 [0] [0]);
    }
    var_26 ^= (((min(1, var_3)) ? (1 > var_2) : ((((var_4 - var_3) > (!var_3))))));
    #pragma endscop
}
