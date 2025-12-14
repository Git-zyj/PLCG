/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = var_2;
                arr_6 [i_1] = min((arr_2 [i_0]), ((((arr_3 [i_1] [i_0]) ? 0 : 14))));
            }
        }
    }
    var_17 = var_9;

    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        arr_18 [i_2] [i_2] [i_4] [i_5] [i_4] = 4;
                        arr_19 [i_2] = 2096851998;
                        var_18 = (max(var_18, 223));
                        var_19 -= (min(((var_7 ? (max(18446744073709551612, 18446744073709551611)) : (((var_2 ? 137 : var_7))))), 3));
                    }
                }
            }
            var_20 = (max(var_20, var_12));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_21 += var_7;
            var_22 = ((((min(var_11, 108))) ? (min((~var_8), 201272746)) : var_4));
            var_23 = (((((max(var_5, (arr_7 [i_2])))) ? (((min(13, 223)))) : (max(17, var_12)))));
        }
        var_24 *= (!((min((~18446744073709551614), ((min((arr_22 [i_2] [i_2]), var_12)))))));
    }
    for (int i_7 = 3; i_7 < 16;i_7 += 1) /* same iter space */
    {
        var_25 = (arr_24 [i_7] [i_7]);
        arr_25 [i_7] [i_7 - 2] = (max(((max((~0), (-32767 - 1)))), (max(1080863910568919040, var_0))));
    }
    for (int i_8 = 3; i_8 < 16;i_8 += 1) /* same iter space */
    {

        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            var_26 &= ((((min(7, 2405694557))) ? ((var_3 ? (min(1922295554673258383, var_7)) : (arr_26 [4]))) : (min(var_2, ((-2147483634 ? var_14 : (arr_26 [4])))))));
            var_27 = (((((((max(var_11, -115))) || ((max(61, (arr_24 [i_8 + 2] [i_8 + 2])))))))) & (((var_12 ? var_14 : -1080863910568919040))));
        }
        arr_31 [i_8] = (min(13194139533312, ((18446744073709551607 ? (!var_6) : (min(var_10, var_9))))));
    }
    for (int i_10 = 3; i_10 < 16;i_10 += 1) /* same iter space */
    {
        var_28 -= (((arr_26 [4]) ? ((213 ? 174 : 13194139533312)) : var_7));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                {
                    var_29 = var_12;
                    var_30 = 140668768878592;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 18;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 17;i_14 += 1)
            {
                {

                    for (int i_15 = 0; i_15 < 18;i_15 += 1) /* same iter space */
                    {

                        for (int i_16 = 1; i_16 < 15;i_16 += 1)
                        {
                            var_31 &= ((((((max(var_0, 73))) * (min(var_9, (arr_28 [i_16] [i_14] [i_10 - 1]))))) ^ var_10));
                            var_32 = (min((arr_45 [i_10]), 1080863910568919044));
                            var_33 = var_11;
                            var_34 = (var_6 > (~var_4));
                            var_35 = ((((max(1, 24))) == ((((arr_48 [i_10] [i_13] [i_14] [i_15] [i_16] [i_16]) ? -1137046351514602033 : (~var_5))))));
                        }
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 18;i_17 += 1) /* same iter space */
                        {
                            var_36 = (max(var_36, 154));
                            var_37 = (~var_1);
                        }
                        for (int i_18 = 0; i_18 < 18;i_18 += 1) /* same iter space */
                        {
                            var_38 = ((var_0 ? (((var_8 ? ((var_11 ? var_10 : 1)) : var_11))) : ((1911968766 ? var_9 : var_6))));
                            var_39 *= var_4;
                        }
                        for (int i_19 = 0; i_19 < 18;i_19 += 1) /* same iter space */
                        {
                            var_40 -= ((-(max(34745, (max(var_12, var_12))))));
                            var_41 = ((~(min(245, (((arr_52 [i_19] [i_14] [15]) ? 182 : var_5))))));
                            var_42 = (max(var_42, ((((arr_50 [i_10 - 3] [i_15] [14] [i_14 - 2] [i_14 - 3] [0]) >= var_1)))));
                            var_43 *= (!213);
                            var_44 = ((max(562949953421311, 104)));
                        }
                        arr_59 [i_14] [i_13] [i_15] [1] [i_10] = (max((((var_2 ? (~1) : var_14))), ((var_8 ? (arr_28 [i_14 + 1] [i_14 - 3] [i_10 - 2]) : var_11))));
                        arr_60 [i_15] [1] [i_10] [i_10] [10] [14] = -1080863910568919040;
                        var_45 = var_5;
                        var_46 = 1;
                    }
                    for (int i_20 = 0; i_20 < 18;i_20 += 1) /* same iter space */
                    {
                        var_47 |= (arr_52 [i_20] [i_20] [i_20]);

                        /* vectorizable */
                        for (int i_21 = 0; i_21 < 18;i_21 += 1)
                        {
                            var_48 *= (((((~(arr_57 [i_10] [i_10] [i_20] [i_14] [i_14] [i_20] [i_21])))) ? (((-(arr_57 [i_10] [i_13] [i_20] [6] [2] [i_21] [i_21])))) : 4294967276));
                            var_49 = var_2;
                        }
                        for (int i_22 = 0; i_22 < 18;i_22 += 1)
                        {
                            arr_68 [16] [14] [14] [i_20] [0] [i_22] [i_20] |= (arr_23 [i_22]);
                            var_50 = ((-(max((((18 ? 248 : -8606274006552393078))), ((-1080863910568919044 ? (arr_39 [i_10]) : 112))))));
                            var_51 = var_13;
                            var_52 = ((-((((max(var_14, 7492214524019426415))) ? ((9 ? var_1 : -8873592054542307919)) : var_8))));
                        }
                        for (int i_23 = 4; i_23 < 17;i_23 += 1)
                        {
                            var_53 = (max(5242271312752730843, (!var_3)));
                            var_54 = (min(-2554751758309065329, (!255)));
                            var_55 = ((min(18446744073709551615, 0)));
                            var_56 -= ((var_4 ? 112 : 0));
                        }
                        var_57 = 2394558835;
                    }
                    for (int i_24 = 0; i_24 < 18;i_24 += 1) /* same iter space */
                    {
                        var_58 = (((((128 ? 4112981255 : 1283855435))) ? (arr_33 [i_10 + 1] [i_14 - 1]) : 0));
                        var_59 = (max(var_59, ((max(((745925508 ? 255 : 1073479680)), 4)))));
                    }
                    var_60 |= (max((!32764), (!15351037662733720433)));
                    var_61 -= 4294967295;
                    arr_74 [i_10] [1] [i_14] [i_13] = -var_11;
                }
            }
        }
        var_62 = (min(((((((var_2 ? 4294967281 : 12561250555228674922))) ? (arr_71 [i_10 + 2] [i_10]) : 1979090427330587576))), ((-13194139533312 ? var_14 : (((var_10 ? 1 : 1)))))));
    }
    /* LoopNest 2 */
    for (int i_25 = 0; i_25 < 10;i_25 += 1)
    {
        for (int i_26 = 0; i_26 < 10;i_26 += 1)
        {
            {
                var_63 &= ((~(((arr_55 [i_25] [i_26]) ? var_10 : var_1))));
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 10;i_27 += 1)
                {
                    for (int i_28 = 0; i_28 < 10;i_28 += 1)
                    {
                        {
                            var_64 = var_9;
                            var_65 = (arr_14 [i_25] [i_26] [i_27] [i_28]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
