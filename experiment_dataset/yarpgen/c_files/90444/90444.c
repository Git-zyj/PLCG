/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = (arr_2 [i_1 - 1] [i_0]);
                var_17 *= -20860;
                var_18 ^= min(47, (((((var_3 << (((arr_1 [i_0]) - 1568228294)))) > ((34250 ? 0 : (arr_4 [i_0] [i_1] [i_1])))))));
            }
        }
    }
    var_19 &= var_15;

    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_20 = (((arr_6 [i_2]) ? (((arr_5 [i_2]) * (arr_6 [i_2]))) : (((arr_5 [i_2]) ? (arr_6 [i_2]) : 47))));
        var_21 ^= (0 | -31809);
        var_22 = (min(((-(arr_6 [i_2]))), ((min((arr_5 [i_2]), var_8)))));
        var_23 = (min(34222, (((((32767 % (arr_5 [i_2]))) <= (arr_6 [i_2]))))));
    }
    for (int i_3 = 3; i_3 < 15;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 2; i_4 < 15;i_4 += 1) /* same iter space */
        {
            var_24 -= (((!(arr_10 [i_3] [i_3] [i_4 + 1]))));
            var_25 = (min(((((max(var_14, 899723180))) ? 16 : (((arr_11 [i_3]) ? (arr_7 [i_3]) : var_13)))), (arr_11 [i_3])));
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_17 [i_3] [i_3] [i_3] [i_3] [i_3] |= ((((max(3582313807, 1997682521))) ? var_15 : (7639232962921154857 >> var_13)));
                        arr_18 [i_4] = (((~(arr_9 [i_3]))));
                        var_26 = (((-32767 - 1) ? (771556481 - -14510) : 1068556336));
                        var_27 = ((2116095335 ? -25692 : 952935680));
                    }
                }
            }
            arr_19 [i_4] &= 252;

            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                var_28 -= ((((((!0) | (arr_16 [i_7 - 1] [i_7] [i_4 - 1])))) >= -7904589766184443716));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 15;i_9 += 1)
                    {
                        {
                            var_29 = (max(67, 34208));
                            arr_29 [i_4] [i_7] = var_7;
                        }
                    }
                }
            }
        }
        for (int i_10 = 2; i_10 < 15;i_10 += 1) /* same iter space */
        {
            var_30 = ((0 && (((((min((arr_24 [i_3] [i_3] [i_10]), (arr_6 [i_3]))))) != (((arr_30 [i_3] [i_3] [i_10]) - 0))))));
            var_31 = ((((var_8 >= ((var_1 - (arr_30 [i_3] [i_3] [i_10])))))));
            var_32 ^= ((!(arr_20 [i_3] [i_10] [i_10 + 1] [i_10])));
        }
        for (int i_11 = 2; i_11 < 15;i_11 += 1) /* same iter space */
        {
            var_33 = (min(var_1, (((var_11 ? ((((arr_11 [i_3]) != (arr_22 [i_11])))) : (arr_31 [i_11] [i_3]))))));
            var_34 = ((~(max(((1068556336 ? var_13 : -12398)), (~var_5)))));
        }
        var_35 = var_8;

        /* vectorizable */
        for (int i_12 = 2; i_12 < 13;i_12 += 1) /* same iter space */
        {
            var_36 = (arr_33 [i_3] [i_3 + 1] [i_12]);
            var_37 = (var_13 < 18461);
            /* LoopNest 3 */
            for (int i_13 = 1; i_13 < 14;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 15;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 17;i_15 += 1)
                    {
                        {
                            var_38 = (arr_6 [i_14]);
                            var_39 = ((var_1 - (1 / -32760)));
                        }
                    }
                }
            }
        }
        for (int i_16 = 2; i_16 < 13;i_16 += 1) /* same iter space */
        {
            arr_47 [i_3] [i_16 - 1] [i_3] &= (((arr_6 [i_3 + 1]) | ((min((arr_33 [i_16] [i_16 + 1] [i_16]), var_7)))));
            var_40 += (((((~(32256 * var_6)))) ? 32 : var_3));
            var_41 = (arr_7 [i_3 - 3]);
        }
        for (int i_17 = 2; i_17 < 13;i_17 += 1) /* same iter space */
        {
            var_42 = ((((min(var_5, (!var_1)))) ^ ((((max(-14, (arr_48 [i_3 + 2])))) & var_3))));
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 0;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 17;i_19 += 1)
                {
                    {
                        var_43 = (min(var_43, (((-(arr_32 [i_3] [i_17]))))));
                        var_44 = (max(((((var_2 & 9510) ? var_15 : ((((arr_27 [i_3] [i_3] [i_3] [i_19] [i_19] [i_19]) != var_9)))))), (arr_28 [i_3] [i_3] [i_17 + 4] [i_18] [i_18] [i_19])));
                        arr_55 [i_17] [i_18] [i_19] = (max((((((min(var_5, (arr_22 [i_18]))))) % (arr_21 [i_17 + 3] [i_18] [i_19]))), (-32767 - 1)));
                    }
                }
            }
            var_45 ^= (((arr_12 [i_3] [i_17]) ? (((var_3 ? ((var_4 ^ (arr_52 [i_3] [i_3 + 2]))) : ((5123 >> (3496158269 - 3496158249)))))) : var_1));
        }
    }
    for (int i_20 = 3; i_20 < 15;i_20 += 1) /* same iter space */
    {
        var_46 = (!190);
        arr_59 [i_20] [i_20] = (max(((((arr_58 [i_20 + 2]) < 1999243984))), (((arr_34 [i_20 - 3]) ? var_13 : (arr_22 [i_20])))));
        /* LoopNest 2 */
        for (int i_21 = 2; i_21 < 14;i_21 += 1)
        {
            for (int i_22 = 3; i_22 < 16;i_22 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_23 = 0; i_23 < 17;i_23 += 1)
                    {
                        var_47 = (arr_56 [i_20]);
                        var_48 = var_1;
                        var_49 = var_15;

                        for (int i_24 = 2; i_24 < 15;i_24 += 1) /* same iter space */
                        {
                            var_50 = var_12;
                            var_51 = (max(var_51, ((((var_13 % var_15) ? (32767 % var_14) : (((arr_31 [i_21] [i_24]) ? 32758 : var_1)))))));
                            arr_71 [0] &= 3323193155;
                        }
                        for (int i_25 = 2; i_25 < 15;i_25 += 1) /* same iter space */
                        {
                            var_52 = var_12;
                            arr_76 [i_25] [i_21] [i_21] [i_20] [i_25 - 2] [i_20] [i_22] = (((((13794 ? -7100475122834379783 : (arr_65 [i_20 + 2] [i_20] [i_22] [i_20] [i_25] [i_22])))) ? var_4 : var_0));
                            var_53 = (max(var_53, (((-7100475122834379760 <= (arr_73 [i_20] [i_21 + 2] [i_22] [i_23] [i_25]))))));
                            var_54 = (i_20 % 2 == zero) ? (((1 >> ((((var_2 ? (arr_61 [i_20]) : 607978907)) - 4294960412))))) : (((1 >> ((((((var_2 ? (arr_61 [i_20]) : 607978907)) - 4294960412)) - 4294945455)))));
                        }
                    }
                    var_55 = (max(var_55, ((((((max(-22199, (arr_12 [i_21] [i_21 + 3]))))) ? (((((var_7 ? 2422509489 : (arr_8 [i_21 + 2])))) ? (((arr_26 [i_20] [i_21] [i_22] [i_20] [i_21] [i_21] [i_20]) & var_15)) : (arr_11 [i_20 - 3]))) : (((max(11194, -26872)))))))));
                }
            }
        }
    }
    #pragma endscop
}
