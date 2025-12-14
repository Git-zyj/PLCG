/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_14 ^= (~17226);
        var_15 = 1;

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_16 |= 3968;
            var_17 = (min(var_17, -730723868));
            var_18 = max((min(-219, -8693043177780583688)), (arr_3 [i_0 - 1] [i_0 - 1] [i_1]));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_19 = (arr_3 [i_0 + 1] [0] [i_2]);

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_20 ^= (((arr_1 [1]) & 26347));
                            var_21 -= -32760;
                            var_22 = (arr_3 [i_0 + 2] [i_1] [i_1]);
                        }
                        var_23 = min(((~(arr_11 [i_0 + 1] [16] [9] [i_3] [i_3]))), ((1 >> (219 - 193))));
                    }
                }
            }
            var_24 = (((((((1 && (arr_6 [i_1] [i_1] [i_0] [i_1]))) ? (arr_7 [i_0 - 1] [i_0 - 1] [i_0]) : (arr_1 [i_0 - 1])))) ? ((~(~1))) : ((((max(69, 3968))) ? var_7 : 4921))));
        }
    }
    for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
    {
        var_25 = (((arr_12 [i_5]) & (arr_7 [i_5 + 1] [i_5 + 2] [i_5])));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 18;i_8 += 1)
                {
                    {
                        arr_21 [i_5 + 1] [i_5] [i_8 - 1] [i_8] = -3969;

                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            var_26 = (arr_2 [i_8 + 1] [i_5 + 2]);
                            var_27 = ((((min((((!(arr_7 [16] [i_6] [i_5])))), ((27066 - (arr_18 [i_5] [i_7] [i_6] [i_5 - 1])))))) > -6239));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    arr_29 [i_10] [i_5] [i_10] [i_11] = (min(var_2, (((!(arr_7 [i_5 - 1] [11] [i_5 + 1]))))));
                    arr_30 [i_5 + 2] [i_5] [i_11] = (((-48 <= -61) + (~1)));
                    arr_31 [i_5] = 1;
                    arr_32 [i_10] [i_5] [i_11] [i_11] = (arr_5 [i_5] [i_5 + 2] [i_5 + 1] [i_5 + 1]);

                    for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
                    {
                        arr_35 [i_5 + 2] [i_5] [i_5] = ((((min((arr_15 [i_5 + 1]), -3971))) <= ((-6306724092811945010 ? (arr_15 [i_5 - 1]) : (arr_15 [i_5 + 1])))));
                        var_28 = (min(var_28, (3968 >= 1)));
                        var_29 = (((((!246717400343205418) + 3949)) - (arr_5 [i_5] [i_10] [i_10] [i_10])));
                        var_30 = ((0 >> ((((207 ? var_3 : (((min(var_7, (arr_17 [15] [i_10]))))))) - 2807675726493819056))));
                        var_31 = ((-(((arr_27 [i_5 - 1] [i_10] [i_12]) ? 4006559825 : (arr_27 [i_5 - 1] [1] [3])))));
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 19;i_13 += 1) /* same iter space */
                    {
                        arr_38 [i_5] [i_11] [i_10] [i_13] [i_13] [i_11] |= ((!(~37)));
                        var_32 = (min(var_32, (((35 ? (1 * -3969) : ((37 ? 238 : 1)))))));
                    }
                }
            }
        }
        var_33 = (((((-(arr_4 [i_5 - 1] [i_5])))) ? (arr_3 [i_5] [i_5] [i_5]) : var_3));
    }
    /* vectorizable */
    for (int i_14 = 1; i_14 < 17;i_14 += 1) /* same iter space */
    {
        var_34 |= ((-3968 & (arr_15 [i_14])));
        var_35 ^= (((arr_19 [i_14 + 1] [i_14 - 1] [i_14 - 1] [i_14 + 1] [11]) ? (arr_15 [i_14 + 1]) : (arr_6 [i_14 - 1] [i_14 + 2] [i_14 + 2] [12])));
    }
    /* vectorizable */
    for (int i_15 = 1; i_15 < 17;i_15 += 1) /* same iter space */
    {
        var_36 = var_4;
        var_37 = (arr_36 [i_15] [i_15 - 1] [i_15 + 1] [i_15 + 2]);
        arr_46 [i_15] [i_15] = (arr_36 [13] [i_15 - 1] [11] [i_15]);
        arr_47 [i_15] [i_15] = (((arr_2 [i_15] [i_15]) && (arr_26 [i_15 - 1] [i_15] [i_15 + 2])));
        var_38 = (((arr_8 [i_15] [i_15 + 1] [15]) >> (((arr_2 [i_15] [i_15 + 2]) - 4676))));
    }
    var_39 = var_8;
    #pragma endscop
}
