/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_5 ? (((-(min(1484066782, var_5))))) : var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] = (min((((max(367076700, 28137)) << (var_9 - 4382061871020629538))), (((arr_3 [i_0] [i_0] [i_0]) << (-50 + 67)))));
                    var_11 ^= -4151352454285854180;
                    var_12 = min(((((((max(-96, var_1)))) < 13558650022683093173))), var_9);
                    arr_8 [i_0] [i_0] [i_0] [12] = (!112);
                    arr_9 [i_0] [i_1] [i_0] [i_2] = (arr_1 [i_0] [i_2]);
                }
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    var_13 ^= -1;
                    arr_12 [i_0] = (((1652560076 << (260096 - 260083))));
                    arr_13 [i_0] [i_0] [i_3 - 2] [i_3] = (min(((((arr_6 [i_0] [i_3 - 1] [i_3] [i_0]) > var_5))), (min((var_6 & var_8), (((1158648966 || (arr_6 [i_0] [i_0] [i_1] [i_0]))))))));
                    var_14 = (max(var_14, ((max((((0 ? 1 : -96))), (7359597292966417881 % 1))))));
                    var_15 ^= (max((((28139 - (arr_3 [i_3 + 2] [i_1] [i_3 + 2])))), (((var_3 + 9223372036854775807) >> ((((max(94, var_1))) - 39))))));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_1] [i_4] [i_5] = (14680 ^ var_0);
                        arr_19 [i_5] [i_0] [i_1] [i_1] [i_0] [i_0] = var_3;
                        arr_20 [i_5] [i_4] [i_0] [i_0] [i_0] [i_0] = ((-(!var_0)));
                        arr_21 [i_0] [i_0] [i_1] [i_1] [i_4] [i_0] = var_4;
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                arr_27 [i_0] [i_1] [i_4] [i_0] [i_7] = -1;
                                var_16 = (min(var_16, (214 <= -21671)));
                                arr_28 [i_0] [i_1] [i_4] [i_4] [i_0] [i_7] = var_2;
                            }
                        }
                    }
                    var_17 ^= ((~(!29)));
                }
                var_18 ^= (!var_0);
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        {

                            for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
                            {
                                arr_35 [i_0] [i_0] [i_8] [i_9] [i_10] = ((~(((238 >= (20 / 53006))))));
                                var_19 = ((((!-28152) <= -4151352454285854168)));
                                arr_36 [i_10] [i_0] [i_0] [i_0] [i_0] = ((!(((-68 ? var_4 : (arr_31 [i_0] [i_1] [i_8] [i_9]))))));
                                arr_37 [i_0] [i_0] [i_9] [i_0] = var_7;
                            }
                            for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
                            {
                                var_20 ^= arr_6 [i_0] [i_1] [i_0] [i_1];
                                var_21 = (((-1 >= 230) & -58));
                                arr_40 [i_0] [i_0] [i_0] [i_8] [i_0] [i_9] [i_11] = var_5;
                                var_22 ^= ((+(max((arr_34 [i_8]), (arr_34 [i_8])))));
                            }

                            for (int i_12 = 2; i_12 < 20;i_12 += 1)
                            {
                                var_23 = (-76 ? (min(var_9, (arr_26 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 2] [i_12 + 1]))) : var_1);
                                arr_43 [i_0] [i_0] [i_8] [i_9] [i_12 + 1] [i_12] [i_12] = (arr_24 [i_0]);
                                arr_44 [i_0] [i_1] [i_0] = ((var_8 ? -4589082344147842072 : (((arr_41 [i_8] [i_0] [i_12 - 1] [i_12] [i_12 - 1]) * 1))));
                            }
                            for (int i_13 = 0; i_13 < 21;i_13 += 1) /* same iter space */
                            {
                                var_24 = (min(var_24, ((((var_3 <= -6415075812893286723) << (((-28138 * var_4) ? -5318311909334589619 : (!var_8))))))));
                                var_25 ^= ((((12901888733024324766 <= var_4) ? -87 : var_5)));
                            }
                            for (int i_14 = 0; i_14 < 21;i_14 += 1) /* same iter space */
                            {
                                var_26 ^= (min(((124 ? 3136318317 : 10467005063560058740)), 124));
                                arr_49 [i_0] [i_0] [i_8] [i_9] = min((arr_30 [i_0]), (min(var_6, var_5)));
                            }
                            /* vectorizable */
                            for (int i_15 = 0; i_15 < 21;i_15 += 1) /* same iter space */
                            {
                                arr_53 [i_0] = (((arr_6 [1] [i_8] [i_9] [i_0]) - (var_5 >= -76)));
                                var_27 ^= ((var_5 || (28143 << 7)));
                                arr_54 [i_0] = ((+((((arr_0 [i_0] [i_9]) == 8064)))));
                            }
                        }
                    }
                }
                arr_55 [i_0] = (-121 ? (10467005063560058730 >= 0) : ((~(min(18337283555220801404, 28143)))));
            }
        }
    }
    var_28 = var_7;
    var_29 = var_0;
    var_30 = var_1;
    #pragma endscop
}
