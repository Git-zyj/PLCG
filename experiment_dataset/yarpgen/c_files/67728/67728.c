/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    var_13 = var_6;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_7 [i_1] [12] = ((var_10 ? (max(var_2, var_6)) : ((((min(0, 1)))))));
            arr_8 [i_1] [i_0] [15] = (min(var_1, var_6));
        }
        for (int i_2 = 3; i_2 < 21;i_2 += 1)
        {
            arr_12 [i_0] [i_2] = var_2;
            arr_13 [i_0] [i_2 + 1] [i_2] = ((var_6 ? ((max(var_3, 8))) : ((var_6 ? -3694388705287824649 : 214))));
            arr_14 [i_0] [i_2 - 1] [i_2 + 3] = var_2;
            arr_15 [i_2] [i_0] = var_6;
            var_14 = (max(var_14, var_0));
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
        {
            var_15 ^= var_9;
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        arr_26 [i_0] [i_0] [1] [1] = (min(((1 ? 1 : 7076252003799841868)), (!-var_8)));
                        arr_27 [i_5] [i_3] [i_0] = ((((min((min(1, (-2147483647 - 1))), (!var_9)))) ? ((~((var_8 ? var_6 : var_1)))) : var_4));
                        var_16 ^= ((31 ? (((((min((-32767 - 1), 1))) ? ((var_10 ? var_3 : var_4)) : var_1))) : (~var_2)));
                        arr_28 [i_3] = ((((((!1) ? (max(var_0, var_2)) : ((max(var_6, var_10)))))) ? (((max(var_4, var_3)) ? var_9 : ((919672910 ? 3807220554023694167 : -2147483635)))) : ((min(-var_1, ((var_5 ? var_11 : var_9)))))));
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 3; i_7 < 22;i_7 += 1)
            {
                arr_34 [i_0] [i_7] = var_3;
                arr_35 [i_7] = ((((min(var_9, var_2))) ? var_8 : (max((((1 ? 1 : 1))), ((var_9 ? var_8 : var_6))))));
            }
            var_17 = ((!(((var_2 ? var_0 : var_11)))));
            arr_36 [i_6] |= (min(-1658602820, 1));

            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                var_18 = (max(var_18, var_3));
                arr_41 [i_0] [i_6] [i_6] [i_8] = -56;

                for (int i_9 = 2; i_9 < 20;i_9 += 1)
                {
                    var_19 = var_6;
                    var_20 = (min(var_20, (~var_7)));

                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        arr_48 [i_0] [i_10] [i_10] [i_10] [i_10] [i_0] = ((((((((var_3 ? var_10 : var_2))) ? var_9 : (!var_2)))) ? (min(1, 12298698699151508672)) : (((var_8 ? ((var_3 ? var_6 : var_11)) : ((var_4 ? var_6 : var_3)))))));
                        arr_49 [i_10] [i_10] [i_0] [1] [i_6] [i_10] [i_0] = var_10;
                        var_21 = (max(((var_1 ? (((max(var_10, var_3)))) : var_2)), ((min(-524872103, 45235)))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        arr_52 [i_11] [i_11] = var_1;
                        arr_53 [8] [i_9] [i_11] [i_0] [i_0] = (((((-32758 ? var_4 : var_4))) ? 11 : var_6));
                    }
                    arr_54 [i_8] [11] [22] [i_8] [i_8] = var_11;
                }
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    arr_57 [i_6] [i_0] [i_6] [i_0] [i_0] = var_6;
                    arr_58 [i_0] [i_0] [i_0] [i_0] = ((((max(var_1, 850959107))) ? var_10 : var_9));
                    arr_59 [i_0] [i_0] [i_8] [i_8] = ((((((!var_0) ? var_10 : (max(var_6, var_7))))) ? (min(6148045374558042943, -12)) : ((((!var_7) ? (max(var_7, var_8)) : var_8)))));
                }
            }
            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                arr_64 [12] [i_6] [i_6] [i_6] = ((-(min(var_5, (max(var_2, var_10))))));
                arr_65 [i_0] [i_6] = var_11;
            }
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                arr_69 [i_0] [i_6] [i_14] &= (max(((~(max(var_5, var_6)))), ((((((var_0 ? var_11 : var_10))) ? (max(var_7, var_11)) : ((min(-1, -707354600))))))));

                for (int i_15 = 0; i_15 < 24;i_15 += 1)
                {
                    var_22 = var_9;
                    arr_73 [i_15] |= (max(var_0, var_5));
                }
                arr_74 [i_14] = ((((min(var_9, 13))) ? (min(var_5, (!var_0))) : (((((min(var_4, var_8))) ? ((min(var_0, var_11))) : var_0)))));
                arr_75 [i_14] = (min(-808950712, 8185021083105684046));
                arr_76 [i_14] [i_14] = ((((((0 ? var_6 : var_4)))) ? (max(var_4, ((var_1 ? var_9 : var_4)))) : var_0));
            }
            arr_77 [i_6] = var_2;
        }

        /* vectorizable */
        for (int i_16 = 3; i_16 < 23;i_16 += 1)
        {
            var_23 ^= var_9;
            arr_80 [i_16] = var_4;
            arr_81 [i_16] [i_16] = var_9;
        }
        arr_82 [13] = (((((65248 ? -1 : var_9))) ? var_5 : var_1));
        var_24 *= ((-var_1 ? (((!((min(var_9, var_1)))))) : var_0));
    }
    var_25 |= var_2;
    #pragma endscop
}
