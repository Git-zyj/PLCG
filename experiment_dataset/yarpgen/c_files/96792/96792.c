/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = (min((((!(arr_1 [i_2])))), (((!622079844) ? (arr_4 [i_1]) : (arr_0 [11] [11])))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_17 = 0;
                            arr_12 [i_0] [i_1] [3] [3] = (arr_6 [i_0] [i_1] [i_3] [i_3]);
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_18 = 622079863;
                            var_19 = ((+(min((arr_10 [i_1]), 330023931740891429))));
                        }
                        arr_15 [i_0] [i_1] [8] [i_2] [1] = ((2318510560462090494 ? (arr_13 [i_0] [8] [i_2] [8] [i_2]) : (arr_10 [i_3])));
                    }
                    var_20 = ((~((min(1, (arr_0 [i_0] [i_0]))))));

                    for (int i_6 = 2; i_6 < 12;i_6 += 1)
                    {
                        var_21 = (min(var_21, (arr_11 [i_0] [1] [i_2] [1] [i_6])));

                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            var_22 = var_13;
                            var_23 = ((((max((arr_16 [i_6 + 1] [i_6] [i_6 - 2] [i_6 - 2] [i_6 - 2]), 622079844))) ? ((var_8 ? (arr_9 [i_1] [i_6 - 2] [i_6] [i_6] [i_6 + 1] [i_6]) : (arr_10 [i_6 - 1]))) : var_4));
                            var_24 ^= ((max((arr_18 [9] [12] [5] [12] [5] [i_6 + 1] [i_6]), var_11)));
                            var_25 = min(var_5, var_10);
                        }
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            arr_23 [i_6 - 2] [i_1] [3] [i_6] [i_6] = var_14;
                            var_26 ^= (min(var_5, var_6));
                            var_27 -= (~0);
                            var_28 = (min(var_28, (((!((min(1, 622079844))))))));
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] = ((var_12 ? (((min(1, 0)))) : (min(var_10, var_12))));
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_29 = (min((((arr_20 [i_6] [i_6] [i_6] [5] [i_6 + 1]) ? (((min(1, var_6)))) : (min((arr_14 [i_9]), 3672887452)))), ((min((!var_7), ((var_15 ? (arr_7 [i_0] [3] [i_2] [i_2]) : (arr_6 [i_9] [i_1] [i_1] [i_0]))))))));
                            var_30 = (max((arr_8 [i_1] [5] [i_1] [i_2] [i_2] [i_2]), var_0));
                            var_31 = (-(((((8489080785003166086 ? 31 : (arr_4 [i_1])))) ? (arr_13 [4] [3] [i_2] [i_1] [i_0]) : (!32256))));
                            var_32 = (((((-(arr_2 [i_6] [i_6 - 2] [i_6])))) ? 1 : 3672887452));
                        }
                        var_33 = 32760;
                    }
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        arr_31 [i_0] [i_0] [7] [i_0] [i_0] = ((-((-(arr_26 [i_2] [i_2] [i_2] [i_2] [i_2])))));
                        var_34 = 1;
                    }
                }
            }
        }
        var_35 *= (min((((((~(arr_8 [1] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (~4103499535616533297) : (~4294967295))), (~1)));
        var_36 = var_4;
    }
    var_37 = ((-(min((min(var_4, 32772)), 1))));
    #pragma endscop
}
