/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_13));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 17;i_1 += 1) /* same iter space */
        {
            var_21 = (var_11 % var_12);
            var_22 ^= (((var_11 == 65529) ? 65535 : var_5));
            var_23 = (-53 | 15782564893380408738);
            var_24 = ((1 ? 127 : var_4));
        }
        for (int i_2 = 3; i_2 < 17;i_2 += 1) /* same iter space */
        {
            var_25 = ((((var_2 ? 14 : var_9)) >> (((-1120810391 / -17408) - 64363))));
            var_26 = (min(var_26, (var_0 & var_1)));
        }
        var_27 = var_3;
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    {
                        var_28 = (max(var_28, var_13));
                        var_29 ^= var_6;
                    }
                }
            }
        }
        var_30 |= (((0 ^ var_3) << (((~var_17) - 8292629872882844917))));
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        var_31 = var_14;
        var_32 = (min(var_32, var_14));
        var_33 ^= (!2064398945);
    }

    for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
    {

        for (int i_9 = 2; i_9 < 9;i_9 += 1)
        {
            arr_29 [i_8] [i_8] = (max(var_18, (((((var_19 ? 31 : -1525492148))) ? var_6 : (~var_15)))));
            var_34 = 255;
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            var_35 ^= -1525492148;

            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                var_36 = 1;
                arr_36 [i_8] [i_8] [i_10] [i_11] = -1525492148;
                var_37 = (~-188013773);
            }
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                var_38 = (min(var_38, var_6));
                arr_41 [i_8] [i_8] [i_8] [i_12] = 1804364439;

                for (int i_13 = 2; i_13 < 7;i_13 += 1) /* same iter space */
                {
                    var_39 = var_15;
                    var_40 = (max(var_40, ((((~67) ? ((1 ? -121 : -121)) : var_14)))));
                }
                for (int i_14 = 2; i_14 < 7;i_14 += 1) /* same iter space */
                {
                    arr_50 [0] &= (var_17 - var_0);
                    var_41 = 120;
                    arr_51 [i_8] [i_10] [i_12] = var_18;
                    var_42 = 2113929216;
                }
                for (int i_15 = 2; i_15 < 7;i_15 += 1) /* same iter space */
                {
                    var_43 = (min(var_43, var_13));
                    var_44 = (((!var_4) ? (var_16 && var_14) : 1525492148));
                }
            }
        }
        var_45 = ((((((((13 ? var_0 : var_2))) ? ((-6561451017804829827 ? 13 : var_7)) : (var_18 || 130)))) ? var_5 : var_7));
        var_46 = var_4;
        var_47 = var_14;

        /* vectorizable */
        for (int i_16 = 0; i_16 < 10;i_16 += 1)
        {
            var_48 += -39;
            /* LoopNest 3 */
            for (int i_17 = 1; i_17 < 6;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 10;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 10;i_19 += 1)
                    {
                        {
                            var_49 = var_5;
                            var_50 = var_6;
                        }
                    }
                }
            }
            var_51 ^= ((-2 ? -29040 : var_19));
        }
        for (int i_20 = 0; i_20 < 10;i_20 += 1)
        {
            var_52 ^= (max(-1416, var_6));
            var_53 = (192 > var_19);

            for (int i_21 = 0; i_21 < 10;i_21 += 1)
            {

                /* vectorizable */
                for (int i_22 = 0; i_22 < 10;i_22 += 1)
                {
                    var_54 += 1411018305;
                    var_55 = -838313601;
                    arr_74 [i_8] [i_20] [4] [i_21] [i_22] = (var_2 & 0);
                }
                arr_75 [i_8] [i_8] = ((181 ? 1525492147 : ((-1416 ? var_7 : 120))));
            }
        }
        for (int i_23 = 1; i_23 < 7;i_23 += 1)
        {
            var_56 += var_18;
            arr_78 [i_8] [i_8] = var_16;
            var_57 &= (((-29044 ? var_2 : var_6)));
        }
    }
    for (int i_24 = 0; i_24 < 10;i_24 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_25 = 2; i_25 < 9;i_25 += 1)
        {
            for (int i_26 = 0; i_26 < 10;i_26 += 1)
            {
                {
                    var_58 ^= var_6;
                    var_59 = var_11;
                    arr_87 [i_25] [8] [i_26] [i_25] = (((max((min(var_8, -76)), (~39))) | (1307967696 * 49256)));
                    /* LoopNest 2 */
                    for (int i_27 = 0; i_27 < 10;i_27 += 1)
                    {
                        for (int i_28 = 1; i_28 < 8;i_28 += 1)
                        {
                            {
                                var_60 = var_2;
                                var_61 = ((-9223372036854775804 <= (((var_17 ? var_6 : var_3)))));
                                arr_92 [i_28 + 1] [i_27] [i_27] [i_27] [i_24] = (max(((((7 != var_9) == (var_16 && var_19)))), ((14390191654401983124 ? ((var_3 ? 19797 : 164)) : -105))));
                            }
                        }
                    }
                    var_62 = (~39);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_29 = 4; i_29 < 8;i_29 += 1)
        {
            for (int i_30 = 1; i_30 < 8;i_30 += 1)
            {
                {
                    var_63 = var_17;

                    /* vectorizable */
                    for (int i_31 = 0; i_31 < 10;i_31 += 1)
                    {

                        for (int i_32 = 0; i_32 < 10;i_32 += 1)
                        {
                            arr_103 [i_24] [i_31] [i_31] [i_31] = (!248);
                            var_64 &= (~(var_6 >= 65535));
                            arr_104 [i_24] [i_29 + 1] [i_30 - 1] [i_31] [i_32] [i_31] = var_4;
                        }
                        var_65 ^= var_14;

                        for (int i_33 = 3; i_33 < 9;i_33 += 1) /* same iter space */
                        {
                            var_66 = var_14;
                            arr_107 [i_24] [i_24] [i_24] [i_24] [i_31] = var_8;
                        }
                        for (int i_34 = 3; i_34 < 9;i_34 += 1) /* same iter space */
                        {
                            var_67 = -123;
                            var_68 = 568822681;
                            var_69 += (~39727);
                            var_70 = var_7;
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_35 = 0; i_35 < 11;i_35 += 1)
    {
        var_71 ^= -39;
        arr_113 [i_35] = (!var_15);
    }
    for (int i_36 = 0; i_36 < 15;i_36 += 1)
    {
        var_72 *= var_17;
        /* LoopNest 2 */
        for (int i_37 = 0; i_37 < 15;i_37 += 1)
        {
            for (int i_38 = 0; i_38 < 15;i_38 += 1)
            {
                {
                    var_73 = (((((((max(-29040, 57320))) ? var_4 : ((var_9 ? var_3 : var_10))))) ? ((var_13 ? 1525492136 : (var_8 % var_3))) : var_0));
                    var_74 = ((~((((max(-32180233, var_0))) & (~14390191654401983144)))));
                }
            }
        }
    }
    var_75 = var_10;
    #pragma endscop
}
