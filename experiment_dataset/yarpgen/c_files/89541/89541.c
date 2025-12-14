/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(88762478, (((var_3 && (((var_7 ? 88762496 : var_7))))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        var_15 = (arr_6 [i_0] [i_1] [i_2] [i_2]);
                        var_16 *= (-8128 <= 3330320218902752126);
                        var_17 -= 88762481;
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_18 = 1407111324723143444;
                        var_19 = ((4294967295 ? 144 : -450452441504552916));
                        var_20 += ((((-((var_11 / (-32767 - 1))))) / 1));
                    }
                    var_21 = -1407111324723143423;

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_22 = (min(var_22, (((var_12 ? 0 : var_13)))));
                            var_23 -= -450452441504552916;
                            var_24 = -450452441504552916;
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_25 = (min(var_1, var_13));
                            var_26 = ((30512 + (max(144, var_12))));
                        }
                        var_27 = (max(var_27, (((-2135155610 ? ((+(max((arr_13 [i_2]), 1)))) : -var_9)))));
                    }
                    var_28 = 743290545;
                    var_29 = var_3;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            {

                for (int i_10 = 3; i_10 < 6;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            {
                                var_30 = (min(var_30, ((min(((min(12750, 255))), (arr_16 [10] [i_10 - 2] [i_10 - 1] [i_10 - 3] [i_10 + 1]))))));
                                var_31 = var_3;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 7;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                var_32 ^= (((((((((-32767 - 1) && var_7)))) + (max(var_7, 8631086337309201874)))) & (((-((var_9 ? var_7 : var_3)))))));
                                var_33 = (max(var_33, (min(30517, (max((arr_8 [i_10 - 1] [i_10 + 3] [i_10 + 1] [i_10 + 3] [i_10] [i_10]), ((min(104, (-32767 - 1))))))))));
                                var_34 = (min(var_34, (((max(0, ((540329879 ? var_0 : var_2))))))));
                                var_35 = (max((((~((34415 ? -20444 : 63))))), (1199731687 | var_5)));
                                var_36 = (((48334 & var_5) * var_8));
                            }
                        }
                    }
                }
                for (int i_15 = 0; i_15 < 10;i_15 += 1)
                {
                    var_37 += (((((var_3 ? 367990175 : (var_1 / 3076876333268742765)))) || ((((((32767 ? 127 : 3979592920))) ? (min(1, var_11)) : var_8)))));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 10;i_16 += 1)
                    {
                        for (int i_17 = 4; i_17 < 9;i_17 += 1)
                        {
                            {
                                var_38 = var_10;
                                var_39 &= ((~((~(1758261438 ^ var_13)))));
                                var_40 = var_6;
                                var_41 = (min(var_41, (((-(min(var_3, -var_12)))))));
                            }
                        }
                    }
                }
                var_42 = (min(var_42, (((var_1 & (!1))))));
            }
        }
    }
    #pragma endscop
}
