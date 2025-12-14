/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = min((arr_0 [i_0]), ((((arr_1 [i_0]) ? (arr_2 [i_0] [i_0]) : var_12))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_13 = (((((min(1774690982, 7486678661310946243)) - (arr_1 [i_0]))) + (((arr_4 [i_0 - 3] [i_1] [i_1]) ? (arr_5 [i_1]) : ((-(arr_1 [i_0])))))));
            var_14 = (arr_4 [i_1] [7] [i_1]);
            var_15 = (min(var_15, (((((max(var_7, (var_1 ^ 7486678661310946243)))) ? var_9 : (max(var_8, (max(10960065412398605368, (arr_2 [i_0] [i_1]))))))))));
        }
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 13;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_16 = (arr_0 [i_2]);
                            var_17 = (min(var_17, ((((3216718656 | 10960065412398605373) < ((((-9223372036854775807 - 1) / 9223372036854775807))))))));
                            var_18 = (arr_6 [i_2 + 1] [i_3 - 3]);
                        }
                        var_19 = (min(var_19, (((var_9 && (arr_6 [i_2 + 1] [i_3 - 3]))))));
                        var_20 = ((arr_2 [i_3] [6]) | (((arr_13 [8] [i_3]) ? (arr_0 [i_5]) : var_0)));
                        arr_20 [i_2 - 1] [i_3] [i_2] = (((~var_9) ? 10960065412398605373 : (((~(arr_12 [i_3]))))));
                        var_21 = (i_3 % 2 == 0) ? ((((arr_0 [i_2]) >> (((arr_5 [i_3]) + 5927816782584649149))))) : ((((arr_0 [i_2]) >> (((((arr_5 [i_3]) + 5927816782584649149)) - 3009804443315742328)))));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_22 = 1;
                                var_23 *= (10960065412398605372 >= (arr_11 [i_4] [i_3 + 1] [i_4]));
                                arr_25 [i_2] [i_2] [i_4] [i_2] [i_3] [i_8] [i_8] = (((((~(arr_12 [i_3])))) ? (~7486678661310946239) : (~-8832337506865988367)));
                                var_24 = (min(var_24, 7486678661310946234));
                            }
                        }
                    }
                }
            }
        }
        var_25 = ((arr_1 [i_2 - 3]) ? (arr_1 [i_2 - 3]) : var_7);
        var_26 += var_8;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                {
                    arr_31 [i_2 - 2] [i_2] [i_9] [i_2] = 1;
                    var_27 = (arr_11 [i_9] [i_9] [i_9]);
                    var_28 |= ((!(arr_26 [i_2 + 1] [i_10])));
                }
            }
        }
    }
    var_29 -= (((max(var_3, ((var_8 ? 15527696020031057577 : var_1)))) <= var_10));
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 11;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 10;i_14 += 1)
                    {
                        for (int i_15 = 4; i_15 < 11;i_15 += 1)
                        {
                            {
                                arr_47 [i_11] [i_12] [i_11] [i_13] [i_14] [i_15 + 2] [i_15 - 4] = (max((2 || 7414977054574815648), (((arr_5 [i_15]) ? (arr_16 [i_12]) : ((((var_0 || (arr_4 [i_12] [i_13] [i_14])))))))));
                                var_30 = (max(var_30, var_9));
                            }
                        }
                    }

                    for (int i_16 = 0; i_16 < 13;i_16 += 1)
                    {
                        arr_51 [i_12] [i_12] [i_12] = (arr_42 [i_13]);
                        var_31 += ((39492 ? 1 : 1023));
                    }
                    for (int i_17 = 0; i_17 < 13;i_17 += 1)
                    {
                        var_32 = (max(var_32, ((((-2466551499078075485 ? 7486678661310946239 : -81))))));
                        var_33 = (((var_9 <= (arr_42 [i_13 + 2]))));
                    }
                }
            }
        }
    }
    var_34 = (min((max((var_9 & 7486678661310946239), var_10)), (((-var_2 / (min(var_10, var_2)))))));
    #pragma endscop
}
