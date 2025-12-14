/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 65529;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_21 = (min(var_21, 779304781));

                for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_8 [i_0] [i_1] [7] [4] = (arr_0 [i_1 - 1]);

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            arr_11 [10] [i_2] [7] [i_2] = 3044517448530495123;
                            var_22 = 779304810;
                            arr_12 [i_0] [11] [i_1] [i_2] [i_3] [11] [i_4] = (min((((((min((arr_5 [2] [2] [2]), var_14)))) / (((arr_4 [i_0] [i_0] [i_0]) / 914216445)))), (779304765 % 79)));
                        }
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            arr_17 [i_5] [i_3] [i_2] [i_1] [i_0] = (arr_10 [i_0] [7]);
                            var_23 = (arr_6 [i_0] [i_1] [i_2] [i_3]);
                            var_24 = (arr_3 [i_0]);
                            arr_18 [i_0] [9] [i_0] [i_0] [i_0] = (arr_1 [i_0] [i_0]);
                            arr_19 [i_5] [i_3] [i_2] [i_1] [1] [i_0] = 779304743;
                        }
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            arr_22 [i_0] [i_0] = 2760439201;
                            var_25 = (arr_6 [i_2] [i_2] [i_2] [i_2]);
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            arr_25 [i_0] [i_2] = (arr_13 [i_0] [i_0]);
                            var_26 = (max(var_26, ((max((max(-3515662517, 27288)), 779304776)))));
                        }
                        var_27 = (max(var_27, (arr_23 [i_0] [i_1] [i_1] [i_3] [i_3])));
                    }
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        var_28 = ((-(~40)));
                        var_29 = (((arr_14 [i_0]) >> (((~var_7) - 5760122829583424992))));
                    }
                    arr_30 [i_2] = 779304756;
                }
                for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                {
                    arr_33 [i_0] [i_1] [i_1] [i_9] = (arr_4 [i_0] [i_0] [i_0]);
                    var_30 = arr_3 [i_0];
                    var_31 = 189;
                    var_32 = 3515662495;
                }
                for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                {
                    arr_38 [i_0] [i_0] [i_0] [i_0] = 61;
                    var_33 = 3515662517;
                }
                var_34 = (min(var_34, ((max(53, -914216456)))));
            }
        }
    }
    #pragma endscop
}
