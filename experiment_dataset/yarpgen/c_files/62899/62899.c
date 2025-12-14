/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_17 |= -68;
                arr_5 [i_1] = var_1;

                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    var_18 = var_3;

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_19 = ((!((min(769252620, -42)))));
                            var_20 = (((((((((arr_1 [i_0] [i_1]) ? -68 : (arr_8 [i_0] [i_1] [8] [19])))) ? (arr_10 [i_3 + 1] [i_2 + 3] [i_2] [i_1 - 2]) : 47794))) ? var_9 : (min(var_5, 3611000892))));
                            arr_15 [i_0] [i_0] [i_2 - 1] [i_3] [i_4] [i_0] [i_2] &= (arr_1 [i_0] [i_1]);
                        }
                        for (int i_5 = 3; i_5 < 19;i_5 += 1)
                        {
                            var_21 = (min(((~(arr_1 [i_3] [i_1]))), var_2));
                            var_22 = (((var_13 | var_11) - (((arr_6 [i_3 - 1] [i_1 - 3] [i_5 - 3]) + (arr_6 [i_3 - 1] [i_1 - 3] [i_5 - 3])))));
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_23 |= (max(var_6, (var_7 < var_15)));
                            var_24 = (min(var_24, ((var_0 ? ((((arr_20 [i_0] [i_1] [i_2] [i_1] [i_6] [i_1 + 1] [i_0]) || (arr_20 [i_0] [i_0] [i_2] [i_3 + 1] [i_0] [i_2] [i_2])))) : (arr_20 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3] [i_6])))));
                        }
                        var_25 += (((min(3525714673, -989466470))) ? (((72 ? 0 : 116))) : (((arr_19 [i_0] [i_2] [i_0]) ? 3240982781774954418 : (((327676287 ? var_14 : var_13))))));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                arr_28 [i_1] = (min((min(-var_6, (var_12 != var_5))), var_0));
                                arr_29 [i_1] [10] [i_1] [i_7] [i_8] = ((-var_8 ? (arr_19 [i_1] [i_7] [i_1]) : (((arr_19 [i_1] [i_8] [i_1]) ? 72 : (arr_19 [i_1] [i_2 + 2] [i_1])))));
                                arr_30 [i_7] [i_7] [i_7] [11] [i_7] [11] [i_1] = (min((max(((max(var_3, var_9))), (arr_17 [i_1 + 1] [i_1]))), 1));
                                var_26 = ((!(arr_18 [i_8] [i_8])));
                                var_27 = -42;
                            }
                        }
                    }
                }
                for (int i_9 = 3; i_9 < 17;i_9 += 1)
                {
                    var_28 = (max(var_28, ((((min((arr_18 [i_9 + 3] [i_9]), (var_13 + 1))) >> (15205761291934597198 - 15205761291934597195))))));
                    arr_34 [i_1] [i_1] [i_9] [i_9] = 8538123219675549047;
                }
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    arr_38 [i_0] [i_1] [i_10] = (!15205761291934597199);
                    arr_39 [i_0] [i_10] [i_1 + 2] [i_0] |= ((((((14108684419053017333 ? 3171946950683702061 : 3475844119)))) ? (((3240982781774954417 >= (arr_20 [i_0] [i_0] [i_10] [i_1] [i_1] [i_1 - 3] [i_1 + 3])))) : 989466470));
                }
                arr_40 [i_0] [i_1] [i_1] = ((((-(arr_12 [i_1] [i_1 - 1] [i_0] [i_1 - 1] [i_1] [i_1 + 4])))));
                var_29 = (min(var_29, ((((arr_2 [i_1 + 4] [i_1]) | (min(15667952971731024022, (((67 ? 106 : (arr_7 [i_1] [i_1] [4] [i_1])))))))))));
            }
        }
    }
    var_30 -= (-(~var_14));
    #pragma endscop
}
