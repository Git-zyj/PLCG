/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = ((((((var_1 / (-2147483647 - 1))) & var_10)) ^ ((~(max((arr_1 [i_0]), var_12))))));
                    var_15 = ((((((10 ? (arr_5 [i_0] [i_0] [i_1]) : 98)) * (max((-2147483647 - 1), var_11)))) & (((60 >> (2147483645 - 2147483619))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_16 = (~var_13);
                        arr_12 [i_1] = 128;
                        arr_13 [i_1] [i_1] = (158 >= -26);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_17 *= var_3;
                            var_18 = (-1731838422 == -1519213950);
                            arr_18 [i_0] [i_0] [i_0] [i_1] [i_0] = (~var_14);
                            arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] = ((var_4 >> (81 - 79)));
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_19 = (!var_2);
                            var_20 = 255;
                            arr_23 [i_0] [i_1] = (((173 | var_1) && (var_0 | 225)));
                            var_21 = ((((arr_21 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_1]) != var_8)) ? var_12 : 13);
                        }
                        var_22 &= (~(arr_15 [i_0] [i_0]));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    {
                        arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((var_6 % var_9) >= (2079585953 + 72)))) >= var_8));

                        for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                        {
                            var_23 = 32;
                            var_24 = arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
                        }
                        for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
                        {
                            arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] = (max((arr_4 [i_0]), (~var_9)));
                            arr_39 [i_0] = ((((arr_6 [i_0]) % (arr_35 [i_0] [i_0] [i_8 + 1] [i_9] [i_11]))));
                            var_25 = var_5;
                        }
                        for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
                        {
                            var_26 = ((-((((((arr_4 [i_0]) && var_10))) ^ (arr_2 [i_0] [i_0] [i_0])))));
                            var_27 = (max(var_27, ((((arr_27 [i_8]) == ((2147483647 ? (((arr_28 [i_0] [i_0] [i_0] [i_0]) / var_8)) : (arr_5 [i_0] [i_0] [i_0]))))))));
                        }

                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            var_28 = arr_5 [i_0] [i_0] [i_0];
                            var_29 = arr_45 [i_0] [i_0] [i_0] [i_0] [i_0];
                            var_30 = 127;
                        }
                    }
                }
            }
        }
    }
    var_31 = (min(var_31, (var_7 <= var_1)));
    var_32 = (((var_6 == var_4) ^ (min(((var_5 ? var_0 : var_4)), (var_5 | 2147483645)))));
    var_33 ^= (var_7 >= -1162289085);
    #pragma endscop
}
