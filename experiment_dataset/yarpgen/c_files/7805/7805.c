/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (--0);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_19 = (min(var_19, var_2));

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                var_20 = 0;
                var_21 = (((arr_5 [i_1] [i_0]) ? 60 : (((!(arr_0 [i_0]))))));
            }
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_22 = (-1 || 4294967295);
            var_23 = var_4;
            arr_9 [i_0] = ((var_5 ? (112 & 4294967283) : 1));
            var_24 = -112;
            var_25 = (min(var_25, -1));
        }
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                {
                    var_26 = ((((!(!32754))) ? ((0 ? (arr_8 [i_4]) : var_0)) : ((min(4294967282, (~22))))));
                    var_27 = 536870896;
                    var_28 = (min(((~((min(var_9, var_12))))), (((((var_6 || (-127 - 1))) || (2147483643 ^ 0))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 16;i_8 += 1)
            {
                {
                    var_29 = min((arr_20 [i_4] [i_4]), (((12 > (arr_8 [i_4])))));
                    arr_23 [i_4] [i_4] [i_4] [i_8] = var_2;
                }
            }
        }

        for (int i_9 = 2; i_9 < 17;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
            {

                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
                    {
                        var_30 = ((var_13 <= -1) ? var_9 : (arr_0 [i_4]));
                        var_31 = (i_4 % 2 == zero) ? (min(-1, (((var_3 << 1) >> (((arr_30 [i_9 - 1] [i_9 + 2] [i_9 - 1] [i_4]) + 20110)))))) : (min(-1, (((var_3 << 1) >> (((((arr_30 [i_9 - 1] [i_9 + 2] [i_9 - 1] [i_4]) + 20110)) - 19986))))));
                        var_32 += 32;
                        var_33 = min(var_15, (max((arr_27 [i_4] [i_4] [i_4] [i_9 - 2]), ((min((-127 - 1), var_6))))));
                        var_34 = (min(var_34, 65535));
                    }
                    for (int i_13 = 0; i_13 < 19;i_13 += 1) /* same iter space */
                    {
                        var_35 &= var_13;
                        var_36 = (arr_10 [i_10] [i_10]);
                    }
                    for (int i_14 = 0; i_14 < 19;i_14 += 1) /* same iter space */
                    {
                        var_37 = (min(var_2, -120));
                        var_38 &= (max(-var_4, (min((arr_24 [i_9]), (110 * 65535)))));
                        var_39 = var_13;
                        var_40 = (((((1 ? -12 : (!var_11)))) ? (536870904 + 111) : (((2097151 + ((var_5 - (arr_38 [i_4]))))))));
                    }
                    for (int i_15 = 0; i_15 < 19;i_15 += 1) /* same iter space */
                    {
                        var_41 -= ((-2147483641 ? 0 : 2097167));
                        var_42 += (arr_0 [i_15]);
                    }
                    var_43 = ((((var_11 ? (min(2097167, (arr_28 [i_4] [i_9] [i_9]))) : (var_11 + 4294967275))) >> (arr_32 [i_4] [i_4] [i_10] [1] [i_4])));
                    arr_43 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = 10;
                }
                /* vectorizable */
                for (int i_16 = 0; i_16 < 19;i_16 += 1)
                {
                    arr_46 [i_9 - 1] [i_4] [i_16] = ((3968 >> (61567 - 61561)));
                    arr_47 [i_4] [i_9 - 1] [i_4] [i_16] = -32759;
                    var_44 = (arr_45 [i_4] [i_9]);
                }
                for (int i_17 = 3; i_17 < 15;i_17 += 1)
                {
                    var_45 |= (min(((var_16 ? var_2 : (arr_10 [i_17 - 2] [i_9 + 1]))), (min(-2097189, (arr_10 [i_17 + 4] [i_9 - 2])))));
                    var_46 = (max(var_46, var_6));
                    var_47 &= (max(var_11, (~var_5)));
                }
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 0;i_19 += 1)
                    {
                        {
                            var_48 = (min(3938, ((max(var_10, -1)))));
                            var_49 = (min(var_49, (((-(var_4 - 48))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_20 = 3; i_20 < 18;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 19;i_21 += 1)
                    {
                        {
                            arr_61 [i_4] [i_9] = (((((((32744 ? 0 : 536868864)) % var_9))) > ((var_2 ? (min(-2097167, var_3)) : (!61573)))));
                            var_50 = ((~-1) || var_16);
                        }
                    }
                }
                var_51 -= ((!(65531 & var_1)));
            }
            /* vectorizable */
            for (int i_22 = 0; i_22 < 19;i_22 += 1) /* same iter space */
            {
                var_52 |= ((-(!-117)));

                for (int i_23 = 0; i_23 < 19;i_23 += 1)
                {
                    var_53 |= ((var_11 ? (arr_7 [i_9 - 2]) : (arr_7 [i_9 - 2])));
                    var_54 += (var_1 | 61564);
                }
                for (int i_24 = 1; i_24 < 17;i_24 += 1)
                {
                    arr_68 [i_4] [i_4] [i_9 + 1] [i_4] [i_4] = -64;
                    var_55 = ((18446744073709551615 % (arr_1 [i_9 - 2])));
                    var_56 = (var_9 ^ 61598);
                    var_57 = var_5;
                }
            }
            /* vectorizable */
            for (int i_25 = 0; i_25 < 19;i_25 += 1)
            {
                var_58 += (~var_11);
                var_59 = ((!(arr_58 [i_9 - 2] [i_9 + 2] [7] [i_9 + 2] [i_9])));
            }
            var_60 = (max(var_60, ((((((5 ? var_2 : (arr_60 [4] [i_9] [i_9] [i_9] [i_9 + 1] [8] [i_4])))) ? 18446744073709551608 : (((min(48, -117)))))))));
        }
        var_61 = (((arr_55 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) < (max((arr_55 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]), (arr_55 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))));
        var_62 |= (18014398509481983 <= (((((min(var_6, 56))) + var_14))));
    }
    for (int i_26 = 1; i_26 < 7;i_26 += 1)
    {
        var_63 = 0;
        /* LoopNest 3 */
        for (int i_27 = 0; i_27 < 10;i_27 += 1)
        {
            for (int i_28 = 0; i_28 < 0;i_28 += 1)
            {
                for (int i_29 = 0; i_29 < 1;i_29 += 1)
                {
                    {
                        arr_81 [i_26] [i_27] [i_26] [0] [0] [i_26] = 0;

                        for (int i_30 = 3; i_30 < 9;i_30 += 1)
                        {
                            var_64 = (max((arr_4 [i_26 + 3]), (((-2147483639 || 8388607) ? (((min(var_7, (arr_53 [i_26 + 1] [i_30 + 1] [i_28 + 1] [i_29] [i_30 + 1]))))) : (((arr_55 [i_26 + 3] [i_26] [i_29] [i_26] [i_28] [i_27]) ^ 0))))));
                            var_65 ^= (((-32767 - 1) ? 32 : ((64 ? (!32767) : (max(var_7, (arr_56 [i_26 + 1] [i_26] [2] [i_26 - 1])))))));
                        }
                        /* vectorizable */
                        for (int i_31 = 0; i_31 < 0;i_31 += 1)
                        {
                            arr_88 [i_27] [i_26] [i_27] [i_29] [1] [i_27] = ((!(((-7 ? 0 : 65535)))));
                            var_66 = (((((var_6 ? 65011712 : var_12))) ? var_6 : (-9223372036854775807 - 1)));
                            var_67 += 57344;
                            var_68 = -111;
                        }
                        /* vectorizable */
                        for (int i_32 = 0; i_32 < 10;i_32 += 1)
                        {
                            var_69 = 1;
                            var_70 |= (((-114 + 2147483647) >> (-63 + 63)));
                        }
                        var_71 -= ((var_2 <= ((((arr_4 [i_28 + 1]) == 18446744073709551615)))));
                    }
                }
            }
        }
        var_72 ^= 3972;
    }
    for (int i_33 = 0; i_33 < 20;i_33 += 1)
    {
        /* LoopNest 2 */
        for (int i_34 = 0; i_34 < 20;i_34 += 1)
        {
            for (int i_35 = 0; i_35 < 1;i_35 += 1)
            {
                {
                    var_73 = (max(var_73, 1));
                    arr_99 [i_34] [i_34] = -101;
                    /* LoopNest 2 */
                    for (int i_36 = 0; i_36 < 20;i_36 += 1)
                    {
                        for (int i_37 = 4; i_37 < 18;i_37 += 1)
                        {
                            {
                                var_74 = (!1);
                                var_75 ^= var_10;
                                var_76 = var_6;
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_38 = 0; i_38 < 1;i_38 += 1)
        {
            for (int i_39 = 0; i_39 < 20;i_39 += 1)
            {
                {
                    arr_111 [i_33] [i_33] [i_38] = 3938;

                    for (int i_40 = 0; i_40 < 20;i_40 += 1)
                    {
                        arr_115 [i_33] [i_38] [i_38] [i_33] = ((((((-114 + 2147483647) << (57 - 57)))) && (((var_13 - ((max(var_12, var_5))))))));
                        var_77 = ((!((min((max(21, 61610)), var_12)))));
                    }
                    var_78 = (arr_95 [i_33] [i_38]);
                    var_79 = (max(var_79, ((((min(var_4, (arr_1 [17]))) >= -var_7)))));
                }
            }
        }
        var_80 = (max(var_80, (((((max((-127 - 1), var_5))) ? (!1073741823) : ((max(104, (-127 - 1)))))))));
    }
    var_81 = (((((((min(var_11, var_13))) >= 105))) << 1));
    #pragma endscop
}
