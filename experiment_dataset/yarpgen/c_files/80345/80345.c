/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= var_13;
    var_21 = ((-1493756709 % (max(var_8, var_2))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_22 = (var_16 >= (((arr_4 [i_0 - 1]) ? -206109908 : (arr_7 [i_0] [i_0]))));
                        var_23 = var_8;
                        var_24 = ((min(var_15, var_14)));
                        var_25 = ((((((((var_7 ? var_5 : (arr_0 [i_0 - 1])))) ? 1659094251 : 1659094251))) ? -206109895 : (min(var_3, 563581079))));
                    }
                    for (int i_4 = 2; i_4 < 10;i_4 += 1)
                    {
                        var_26 = (((((arr_5 [i_0 - 2]) ? var_11 : (arr_5 [i_0 - 1]))) == 196));
                        var_27 = ((var_5 * ((206109895 ? (var_12 >= 472160207) : (min(5900206989237675076, (arr_8 [8] [i_2] [i_1] [i_1] [i_0 - 2])))))));
                        var_28 = (15191 >= -206109895);
                    }
                    var_29 = (~(min((arr_2 [i_0]), (max((arr_11 [i_0]), (arr_8 [i_0] [i_1] [12] [i_2] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_30 = (((2906594369948280975 ? -206109908 : 1)));
                                var_31 = ((1 || (arr_14 [i_0 - 1] [i_0] [i_2] [2] [5])));
                                var_32 -= (arr_7 [i_5] [i_5]);
                                var_33 = (max((((min((arr_0 [i_2]), -1409849612)) - var_18)), (((arr_10 [i_0] [i_0 - 2] [i_0 - 2]) ? var_6 : (arr_10 [i_0 - 2] [i_0 - 1] [i_0 + 1])))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 12;i_8 += 1)
                    {
                        {

                            for (int i_9 = 0; i_9 < 14;i_9 += 1)
                            {
                                var_34 = ((((((max((arr_10 [i_0] [10] [i_8]), 1))) != var_4)) ? var_6 : (max((var_11 >= var_9), var_3))));
                                var_35 -= ((((max((arr_12 [i_9] [i_1]), (((var_14 ? var_12 : var_18)))))) ? (-2 / 32764) : (((var_4 <= (arr_15 [4] [i_0 - 2]))))));
                                var_36 = (!0);
                                var_37 = ((((((59 ? var_17 : var_13))) && (arr_3 [i_0] [i_0] [i_7]))));
                            }
                            for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                            {
                                var_38 = (max(((min((arr_23 [i_8 + 2] [1]), 563581079))), var_9));
                                var_39 = var_18;
                                var_40 = ((((arr_15 [i_0] [i_8 + 2]) ? var_13 : (arr_12 [i_0 - 1] [i_1]))));
                                var_41 -= ((((1 ? (min(var_4, var_5)) : (arr_5 [i_8 + 1]))) >= (max((arr_20 [i_0 - 2]), var_3))));
                            }
                            /* vectorizable */
                            for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                            {
                                var_42 = ((((var_15 ? var_12 : var_3))) <= var_11);
                                var_43 ^= arr_28 [i_0] [i_1] [i_7] [i_8 + 1] [4] [i_1] [i_0 + 1];
                            }
                            var_44 -= var_15;
                            var_45 ^= ((((1 ? 1 : var_14)) >= 1));
                        }
                    }
                }
                var_46 -= (min(1, 5094997920330442347));
                var_47 = ((!1185089658) ? (arr_5 [i_0 - 1]) : -206109935);
                var_48 = 1;
            }
        }
    }
    #pragma endscop
}
