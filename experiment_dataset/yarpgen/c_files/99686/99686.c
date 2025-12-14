/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((min(var_9, var_1)) >= var_12));
    var_15 = var_0;
    var_16 = (!-3559302448478304970);
    var_17 = ((((((((1184705290680631963 ? -1184705290680631964 : 28))) ? (611476422 | 4101686587) : -32767))) ? ((((min(var_13, -17))) ? ((var_2 ? var_7 : var_12)) : (min(var_2, var_0)))) : (((var_2 ? var_10 : ((max(var_1, 58151))))))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_18 *= var_10;
        var_19 |= (-110 ? var_1 : 1184705290680631963);
    }
    for (int i_1 = 4; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_20 = (min(-21988, var_3));
        var_21 = (max(((var_11 ? 0 : var_12)), (!6136415664703353222)));
        var_22 -= ((((!(!-4420033156984653620))) && -18493));
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_23 = (min(var_23, (!var_3)));

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_24 += (!var_11);
            var_25 *= var_13;

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_26 *= (!var_6);
                var_27 -= (((167676790 ? var_12 : 0)));
                var_28 *= -6318;
                arr_14 [i_2] [i_2] [i_2] = ((-1184705290680631955 ? 113 : 65516));
            }
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                var_29 += 0;
                var_30 = (max(var_30, 31800));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_23 [i_2] [10] &= var_8;
                            arr_24 [i_2] [i_7] [19] [19] [19] [16] [i_2] = var_9;
                            arr_25 [i_2] [i_3] [i_5] [i_2] [i_7] = (!var_9);
                        }
                    }
                }
            }

            for (int i_8 = 2; i_8 < 20;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 18;i_10 += 1)
                    {
                        {
                            var_31 = 25;
                            arr_35 [i_2 - 2] [i_2 - 4] [i_2] [i_8 - 2] [i_9] [i_10] = (~-2027);
                            var_32 -= var_3;
                        }
                    }
                }
                arr_36 [i_2] [i_2] [i_2] [i_8] |= var_5;
            }
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                var_33 = var_11;
                var_34 = 2750770931;
                var_35 = var_0;
                var_36 *= (!6);
            }
        }
        for (int i_12 = 2; i_12 < 19;i_12 += 1)
        {
            var_37 = (max(var_37, (((var_9 ? -31955 : var_0)))));
            arr_41 [i_2] [i_12] [i_2] = var_9;
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                {
                    var_38 = (var_0 ? 5833115771289027798 : 17584);
                    var_39 = 0;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_15 = 4; i_15 < 21;i_15 += 1) /* same iter space */
    {

        for (int i_16 = 3; i_16 < 20;i_16 += 1)
        {
            var_40 -= (112 < -5636143432552186495);
            arr_51 [16] [i_15] = var_6;
            var_41 = 17266000569972483359;
        }
        var_42 = (~26023);
        var_43 = ((var_11 ? 20368 : var_13));

        for (int i_17 = 0; i_17 < 22;i_17 += 1)
        {

            for (int i_18 = 0; i_18 < 22;i_18 += 1)
            {
                var_44 -= (((((var_0 ? var_9 : var_9))) ? ((var_9 ? var_1 : var_2)) : (var_11 >= var_0)));
                var_45 -= var_0;
            }
            for (int i_19 = 0; i_19 < 22;i_19 += 1)
            {
                var_46 = (var_4 < var_12);
                var_47 -= (var_0 && 2750770931);
                var_48 ^= ((2040 ? var_9 : 110));
                var_49 = (max(var_49, (((var_6 ? ((1610684861 ? var_13 : 62012)) : (!4294967295))))));
                var_50 = (min(var_50, -var_13));
            }
            for (int i_20 = 0; i_20 < 22;i_20 += 1)
            {
                var_51 = (max(var_51, (((2018 ? 2052 : 14378161334723910951)))));
                var_52 = (var_7 ? 57 : var_1);
                var_53 = ((17266000569972483349 ? 63 : var_4));
                var_54 |= (var_10 < var_10);
            }
            arr_62 [i_15] [i_15] [i_15] = ((((var_5 ? var_0 : -1)) | (~var_1)));
            var_55 = 45168;
            var_56 = ((var_3 ? 14113184983808647841 : 8133840973919036247));
        }
        for (int i_21 = 0; i_21 < 22;i_21 += 1)
        {
            var_57 = (min(var_57, 16389085979137783734));
            var_58 = var_3;
            arr_67 [i_15] [i_21] [i_15] = ((var_3 ? -57 : var_0));
        }
    }
    #pragma endscop
}
