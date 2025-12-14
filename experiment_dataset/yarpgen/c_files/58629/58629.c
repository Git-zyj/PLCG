/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (~var_10)));
    var_18 *= ((-91 ? var_4 : ((var_15 ? var_10 : (62248 - var_11)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = (max(var_19, ((min((((((min((arr_1 [i_0]), var_9))) && (3288 && var_15)))), var_15)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((+(min((arr_6 [i_0] [i_1]), ((142590533 << (91 - 89)))))));
                    arr_10 [i_0] [i_0] [i_1] [i_2] = ((1300669968 ? (min((max((arr_4 [i_0]), var_5)), (arr_7 [i_0] [i_1] [i_2]))) : 62248));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        arr_20 [i_0] [0] [i_4] [i_5] |= ((((arr_6 [6] [i_4 + 1]) < 23509)));

                        for (int i_6 = 3; i_6 < 6;i_6 += 1)
                        {
                            var_20 = (max(var_20, (((-275045331 <= 1) ? (max(23509, (((arr_14 [i_0] [i_3] [i_6]) ? 91 : var_7)))) : ((max((arr_18 [i_6 + 2] [i_4 + 1]), (((arr_8 [i_0] [i_3] [4] [i_6]) ? var_0 : (arr_18 [i_0] [i_6]))))))))));
                            var_21 *= (arr_12 [i_0] [i_3] [1]);
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_22 = 1996444548;
                            var_23 *= arr_8 [i_0] [i_3] [8] [i_5];
                            arr_26 [i_0] [i_3] [6] [i_5] [i_0] &= (((min(((var_2 ? var_9 : (arr_12 [i_0] [i_0] [6]))), (max(var_12, (arr_25 [i_0] [i_3] [i_4] [i_5] [i_7]))))) ^ ((((((arr_4 [0]) <= 4539314660423765892)) ? var_7 : 22229)))));
                            var_24 = (max(var_24, (((((((arr_4 [0]) & (arr_4 [6])))) ? (((arr_4 [8]) ? (arr_4 [0]) : (arr_4 [2]))) : (var_3 < var_12))))));
                        }
                        arr_27 [i_0] [i_3] [i_3] [i_3] = (((arr_17 [i_0] [i_3] [i_4]) == (((arr_4 [i_0]) ? (arr_4 [i_0]) : (arr_4 [i_0])))));

                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            var_25 = (max(var_25, (arr_8 [i_0] [i_3] [8] [i_3])));
                            arr_32 [i_0] [0] [i_4] |= (~var_12);
                        }
                        for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                        {
                            var_26 += (min((max((arr_2 [i_0] [i_3] [i_4]), 49777)), ((((arr_21 [i_0] [i_3] [i_4] [i_5] [i_4] [i_9] [i_4 + 1]) >= (var_3 == 12391339956118995697))))));
                            arr_35 [i_0] [i_5] [i_5] [i_4] [i_3] [i_0] [i_0] = (min((min(var_16, ((var_15 ? var_8 : -4124394492684550609)))), (arr_28 [i_0] [i_5] [i_4] [i_5] [i_9] [i_9] [i_9])));
                        }
                        for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
                        {
                            var_27 *= (((((arr_24 [i_3] [i_4 + 1] [i_10] [i_4 + 1] [i_4] [i_4 + 1]) ? (arr_31 [i_3] [i_4 + 1] [i_4] [i_4 + 1] [i_4]) : var_11)) & ((min(2321985174, -71)))));
                            arr_38 [i_0] [i_0] [i_0] [i_0] [i_10] [i_0] [i_0] &= (~((3895291984 ? var_9 : (arr_29 [i_10] [i_10] [i_4 + 1] [i_4] [i_4]))));
                            var_28 = ((~((-16908 | (((arr_37 [i_4]) ? 220 : 46627))))));
                            var_29 = (max(var_29, ((min(194, 9447104880594353884)))));
                        }
                    }
                }
            }
        }
    }
    var_30 = (max(var_30, 63));
    #pragma endscop
}
